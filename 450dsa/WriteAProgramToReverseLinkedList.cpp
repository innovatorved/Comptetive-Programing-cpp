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

Node *ReverseLinkedListUsingIteration(Node* &head)
{
    // Reverse An Linked List
    Node *prev = NULL;
    Node *curr = head;
    Node *next;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    return prev;
}

Node *ReverseLinkedListUsingRecursion(Node* &h){
    
    if(h == NULL || h->next == NULL){
        return h;
    }

    Node * newHead = ReverseLinkedListUsingRecursion(h->next);
    h->next->next = h;
    h->next = NULL;

    return newHead;
}

int main()
{

    // create Nod
    Node *start = new Node(12);

    Node *head = start;
    Node *tail = start;

    // Insert At Head
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

    // Node *reverseLinkedListHeadRecursion = ReverseLinkedListUsingRecursion(head);
    // Print(reverseLinkedListHeadRecursion);


    Node* reverseLinkedListHeadIteration = ReverseLinkedListUsingIteration(head);
    Print(reverseLinkedListHeadIteration);

    return 0;
}