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

bool detectCycle(Node *&head){
    Node * slow = head;
    Node * fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast=fast->next->next;

        if(fast == slow){
            return true;
        }
    }
    return false;
}

Node * DetectStart(Node *& head){
    Node * slow = head;
    Node * fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast=fast->next->next;

        if(fast == slow){
            break;
        }
    }
    if (fast == NULL || fast->next == NULL){
        return NULL;
    }
    fast = head;
    while(slow->next == fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    return slow->next;

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

Node *FloydCycleDetection(Node *&head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && slow != NULL)
    {
        slow = slow->next;
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        if (slow == fast)
        {
            return slow;
        }
    }

    return NULL;
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
    InsertAtTail(tail, 34);
    InsertAtTail(tail, 600);
    InsertAtTail(tail, 900);
    InsertAtTail(tail, 100);
    InsertAtHead(head, 11);
    Print(head);

    cout << FloydCycleDetection(head)<< endl;

    // Make Circular
    tail->next = head->next->next;
    cout<<tail->next->data<<endl;

    cout << FloydCycleDetection(head)<< endl;

    Node * EndNode = DetectStart(head);
    // Remove loop by set nextpointer null
    EndNode->next = NULL;

    Print(head);
    
    return 0;
}