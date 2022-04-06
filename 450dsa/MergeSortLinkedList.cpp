#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory Free Node with Data : " << value << endl;
    }
};

void InsertAtHead(Node *&head, int data)
{
    Node *node1 = new Node(data);
    node1->next = head;
    head = node1;
}

void InsertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void InsertAtPosition(Node *&head, Node *&tail, int data, int pos)
{
    if (pos == 1)
    {
        InsertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt != pos)
    {
        temp = temp->next;
        if (temp->next == NULL)
        {
            InsertAtTail(tail, data);
            return;
        }
        cnt++;
    }
    Node *node1 = new Node(data);
    node1->next = temp->next;
    temp->next = node1;
}

void DeleteAtPosition(Node *&head, Node *&tail, int pos)
{
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt <= pos)
        {
            prev = curr;
            curr = curr->next;
            if (curr->next == NULL)
            {
                tail = prev;
            }
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void Print(Node *&head)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << temp->data << "->NULL" << endl;
}

Node *findMid(Node *head)
{
    Node *slow = head;
    Node *high = head->next;
    while (high != NULL && high->next != NULL)
    {
        slow = slow->next;
        high = high->next->next;
    }
    return slow;
}

Node *Merge(Node *left, Node *right)
{
    if (left == NULL)
    {
        return right;
    }
    if (right == NULL)
    {
        return left;
    }

    Node *ans = new Node(-1);
    Node *temp = ans;
    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    while (left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }
    while (right != NULL)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }
    ans = ans->next ;
    return ans;
}

Node *MergeSort(Node *head)
{
    if (head == NULL || head -> next == NULL)
    {
        return head;
    }
    Node *mid = findMid(head);
    Node *LeftHalf = head;
    Node *RightHalf = mid->next;
    mid->next = NULL;

    Node* left = MergeSort(LeftHalf);
    Node* right = MergeSort(RightHalf);

    Node *mergeLinkedList = Merge(left , right);
    return mergeLinkedList;
}

int main()
{

    // create Nod
    Node *start = new Node(12);
    Node *head = start;
    Node *tail = start;
    InsertAtHead(head, 29);
    InsertAtHead(head, 3);
    InsertAtHead(head, 1);
    InsertAtHead(head, 9);
    InsertAtTail(tail, 0);
    InsertAtTail(tail, 23);
    InsertAtPosition(head, tail, 5, 3);
    InsertAtPosition(head, tail, 55, 1);
    InsertAtPosition(head, tail, 999, 50);
    InsertAtTail(tail, 600);
    Print(head);

    Node * mergeS = MergeSort(head);
    Print(head);
    Print(mergeS);


    return 0;
}