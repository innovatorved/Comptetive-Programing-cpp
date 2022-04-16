#include<iostream>
#include<stack>
using namespace std;

void InsertAtBottom(stack<int> &temp , int data){
    if(temp.empty()){
        temp.push(data);
        return;
    }
    int ele = temp.top();
    temp.pop();
    InsertAtBottom(temp , data);
    temp.push(ele);
}

void ReverserStack(stack<int> &temp){
    if(temp.empty()){
        return;
    }
    int ele = temp.top();
    temp.pop();
    ReverserStack(temp);
    InsertAtBottom(temp , ele);
}

int main(){
    stack<int> q1 ;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);

    cout<<q1.top()<<endl;
    cout<<"Size->"<<q1.size()<<endl;

    cout<<"---Reverse Stack---"<<endl;
    ReverserStack(q1);

    cout<<q1.top()<<endl;
    q1.pop();
    cout<<q1.top()<<endl;
    q1.pop();
    cout<<q1.top()<<endl;
    q1.pop();
    cout<<q1.top()<<endl;
    q1.pop();
    cout<<q1.top()<<endl;
    q1.pop();


    return 0;
}