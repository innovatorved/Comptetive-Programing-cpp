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

Node* AddTwoNumGivenAsLinkedList(Node *&head1 , Node*&head2){
    Node *temp1 = head1;
    Node *temp2 = head2;

    Node *start = new Node(0);
    Node *SumLinkedList = start;
    Node *tail = start;

    int sum = 0;
    int carry = 0;
    while(temp1 != NULL || temp2 != NULL || carry != 0){
        if(temp1 != NULL){
            sum += temp1->data;
            temp1 = temp1->next;
        }
        if (temp2 != NULL){
            sum += temp2->data;
            temp2 = temp2->next;
        }
        if(carry != 0){
            sum += carry;
        }
        carry = sum/10;
        InsertAtTail(tail , sum%10);
        sum = 0;
    }

    return SumLinkedList->next;
}



int main()
{

    Node *start1 = new Node(2);
    Node *head1 = start1;
    Node *tail1 = start1;
    InsertAtHead(head1, 4);
    InsertAtHead(head1, 3);
    InsertAtTail(tail1, 0);
    Print(head1);

    Node *start2 = new Node(3);
    Node *head2 = start2;
    Node *tail2 = start2;
    InsertAtHead(head2, 7);
    InsertAtHead(head2, 9);
    InsertAtHead(head2, 2);
    InsertAtHead(head2, 0);
    Print(head2);

    Node *sumOf2 = AddTwoNumGivenAsLinkedList(head1 , head2);
    Print(sumOf2);


    return 0;
}