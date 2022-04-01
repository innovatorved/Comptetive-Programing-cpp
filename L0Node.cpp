#include<iostream>
using namespace std;

class Node{
    public :
        int data;
        Node * next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

int main(){

    // create Node
    Node* node1 = new Node(10);

    //print node
    cout<< node1 -> data <<endl;
    cout<< node1 -> next <<endl;


    return 0;
}