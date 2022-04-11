#include<iostream>
using namespace std;

#define n 100

class Stack{
    int *arr;
    int top;
    public :
        Stack(){
            this->arr = new int[n];
            this->top=-1;
        }

        void push(int x){
            if(top == n-1){
                cout<<"StackOverflow"<<endl;
                return;
            }
            top++;
            arr[top] = x;
        }
        void pop(){
            if(top == -1){
                cout<<"Underflow"<<endl;
                return ;
            }
            top --;
        }
        bool isEmpty(){
            if(top == -1){
                return 1;
            }
            return 0;
        }
        int Top(){
            if(top == -1){
                cout<<"Not element found"<<endl;
                return - 1;
            }
            return arr[top];
        }
};
int main(){

    Stack St1;

    St1.push(2);
    St1.push(8);
    St1.push(7);
    St1.push(25);
    cout<<"CheckEmpty->"<<St1.isEmpty()<<endl;
    St1.pop();
    cout<<"Top Element --> "<<St1.Top()<<endl;

    return 0;
}