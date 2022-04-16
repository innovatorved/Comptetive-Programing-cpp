#include<iostream>
#include<stack>
using namespace std;

void InsertAtSortedPosition(stack<int> &temp ,int data){
    if(temp.empty()){
        temp.push(data);
        return;
    }
    if(temp.top() < data){
        temp.push(data);
        return;
    }
    int ele = temp.top();
    temp.pop();
    InsertAtSortedPosition(temp , data);
    temp.push(ele);
}

void SortStack(stack<int> &temp){
    if(temp.empty()){
        return;
    }
    int ele = temp.top();
    temp.pop();
    SortStack(temp);
    InsertAtSortedPosition(temp , ele);
}

int main(){
    stack<int> q1;

    q1.push(-8);
    q1.push(1);
    q1.push(2);
    q1.push(-1);
    q1.push(20);

    cout<<"---Sorted Stack---"<<endl;
    SortStack(q1);
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