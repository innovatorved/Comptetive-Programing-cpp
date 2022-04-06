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

Node* ReverseLinkedList(Node *&head){
    if (head == NULL && head->next == NULL){
        return head;
    }
    Node *prev = NULL;
    Node *next;
    Node *curr = head;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    return prev;

}

Node * findMid(Node*&head){
    Node *slow = head;
    Node *high = head;
    while(high != NULL){
        slow = slow->next;
        high = high->next;
        if (high!=NULL){
            high = high->next;
        }
    }
    return slow;
}

bool CheckPalindrome(Node* &head){
    Node *mid = findMid(head);
    // reverse from mid
    Print(mid);
    Node *newHead = ReverseLinkedList(mid);
    Print(head);
    Print(newHead);
    
    Node *temp1 = head;
    Node *temp2 = newHead;

    while(temp1 != NULL || temp2 != NULL ){
        if (temp1->data == newHead->data){
            return true;
        }
        if(temp1->data != temp2->data && temp1->next->data != mid->data && mid->data != newHead->data ){
            cout<<temp1->data<<endl;
            cout<<temp2->data<<endl;
            return 0;
        }
        if(temp2 != NULL){
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
    return 1;
}

int main()
{

    Node *start = new Node(1);
    Node *head = start;
    Node *tail = start;
    InsertAtTail(tail, 2);
    InsertAtTail(tail, 3);
    InsertAtTail(tail, 4);
    InsertAtTail(tail, 4);
    InsertAtTail(tail, 2);
    InsertAtTail(tail, 1);
    Print(head);

    cout<<CheckPalindrome(head)<<endl;



    return 0;

}

