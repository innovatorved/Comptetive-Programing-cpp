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

void DeleteAtPosition(Node *&head, Node* &tail , int pos)
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
            if(curr->next == NULL){
                tail = prev;
            }
            cnt++;
        }
        prev->next = curr -> next;
        curr->next = NULL;
        delete curr;
    }
}

void Print(Node *&head)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << endl;
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

    // Print Linked List
    Print(head);

    // Insert At Tail
    InsertAtTail(tail, 0);
    InsertAtTail(tail, 23);

    // Print Linked List
    Print(head);

    // Insert At position
    InsertAtPosition(head, tail, 5, 3);
    InsertAtPosition(head, tail, 55, 1);
    InsertAtPosition(head, tail, 999, 50);

    // Print Linked List
    Print(head);

    // Insert At Tail
    InsertAtTail(tail, 500);

    // Print Linked List
    Print(head);

    // Verify Head and Tail
    cout << "Head->" << head->data << endl;
    cout << "Tail->" << tail->data << endl;

    // Delete at position
    DeleteAtPosition(head, tail, 1);
    Print(head);

    DeleteAtPosition(head, tail, 4);
    Print(head);

    DeleteAtPosition(head, tail, 8);
    Print(head);

    DeleteAtPosition(head, tail, 6);
    Print(head);

    InsertAtTail(tail , 600);
    Print(head);

    return 0;
}