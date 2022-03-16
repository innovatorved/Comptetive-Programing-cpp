#include<iostream>
using namespace std;

class Node {
    public :
        int data;
        Node *next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void InsertAtHead(Node* &head , int d){
    // new Node created by data
    Node * temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node* &head){
    cout<<"Linked List : ";
    Node* temp = head;
    while (temp->next != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<temp->data<<" ";
    cout<<endl;
}

void InsertAtMiddle(Node* &head, Node* &tail , int data , int index){
    if(index == 0){
        InsertAtHead(head , data);
        return;
    }
    int ind = 0;
    Node* temp = head;
    while(ind < index-1){
        temp = temp->next;
        ind++;
    }
    if(temp->next == NULL){
        InsertAtTail(tail , data);
        return;
    }
    Node * ele = new Node(data);
    ele->next = temp->next;
    temp->next = ele;
}

int main(){
    Node *node1 = new Node(3);

    Node *head = node1;
    Node *tail = node1;

    cout<<"Data --> "<<head->data<<endl;
    cout<<"Next Node --> "<<head->next<<endl;
    print(head);

    InsertAtHead(head , 1);
    print(head);

    InsertAtTail(tail , 6);
    print(head);

    InsertAtTail(tail , 15);
    print(head);

    InsertAtHead(head , 0);
    print(head);

    InsertAtMiddle(head ,tail, 45 , 2);
    print(head);

    InsertAtMiddle(head ,tail, -1 , 0);
    print(head);

    InsertAtTail(tail , 56);
    print(head);

    InsertAtTail(tail , 57);
    print(head);

    // InsertAtMiddle(head ,tail, 55 , 5);
    // print(head);

    return 0;
}