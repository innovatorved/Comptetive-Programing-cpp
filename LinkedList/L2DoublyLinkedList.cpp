#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

// Taversing
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// Size
int getLength(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp!=NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void InsertAtHead(Node* &head , int data){
    Node *temp = new Node(data);
    head->prev = temp;
    temp->next = head;
    head = temp;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;

    InsertAtHead(head , 22);
    InsertAtHead(head , 11);

    print(head);

    // Get Length
    cout<<getLength(head)<<endl;


    return 0;
}