#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

class Queue{
    Node *front;
    Node *back;

    public:
        Queue(){
            Node *temp = new Node(1);
           this->front = temp;
           this->back = temp; 
        }

        void push(int data){
            Node *temp = new Node(data);
            back->next = temp;
            back = temp;
        }

        void pop(){
            if(front->next != NULL){
                front->next = front->next->next;
            }
        }

        int peek(){
            if (front->next!= NULL){
                return front->next->data;
            }
            return -1;
        }
        bool isEmpty(){
            if (front->next == NULL){
                return true;
            }
            return false;
        }

};

int main(){
    Queue q1;

    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);

    cout<<q1.peek()<<endl;
    q1.pop();
    cout<<q1.isEmpty()<<endl;
    cout<<q1.peek()<<endl;
    q1.pop();
    cout<<q1.peek()<<endl;
    q1.pop();
    cout<<q1.peek()<<endl;
    q1.pop();
    cout<<q1.isEmpty()<<endl;

    return 0;
}