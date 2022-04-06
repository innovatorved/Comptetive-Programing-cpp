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

int getLength(Node *&head){
    int cnt = 0;
    Node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

void RotateALinkedList(Node* &head , int k){
    int size = getLength(head);
    if(k == size || k == 0){
        return;
    }
    if(k > size){
        k = k%size;
    }
    Node *temp = head;
    int remain = size - k;
    while(remain != 1){
        temp = temp->next;
        remain--;

    }
    Node *head2 = temp->next;
    Node *temp2 = temp->next;
    temp->next = NULL;

    while(temp2->next != NULL){
        temp2 = temp2->next;
    }
    temp2->next = head;
    head = head2;
}

int main()
{

    Node *start = new Node(8);
    Node *head = start;
    Node *tail = start;
    InsertAtTail(tail, 9);
    InsertAtTail(tail, 3);
    InsertAtTail(tail, 13);
    InsertAtTail(tail, 4);
    InsertAtTail(tail, 2);
    InsertAtTail(tail, 1);
    Print(head);

    cout<<"Size->"<<getLength(head)<<endl;
    
    RotateALinkedList(head , 3);
    Print(head);


    return 0;

}

