#include<iostream>
#include<stack>

using namespace std;

class Queue{
    stack<int> s1;
    public:
        void push(int data){
            s1.push(data);
        }

        void pop(){
            if(s1.empty()){
                cout<<"Underflow"<<endl;
                return;
            }
            if (s1.size() == 1){
                s1.pop();
                return;
            }
            int ele = s1.top();
            s1.pop();
            pop();
            s1.push(ele);      
        }

        int peek(){
            if(s1.empty()){
                cout<<"Underflow"<<endl;
                return -1;
            }
            if (s1.size() == 1){
                int ele = s1.top();
                return ele;
            }
            int ele = s1.top();
            s1.pop();
            int peekEle = peek();
            s1.push(ele);
            return peekEle;

        }

        bool empty(){
            if(s1.empty()){
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

    cout<<"Empty->"<<q1.empty()<<endl;

    cout<<q1.peek()<<endl;
    q1.pop();

    cout<<q1.peek()<<endl;
    q1.pop();

    cout<<q1.peek()<<endl;
    q1.pop();

    cout<<q1.peek()<<endl;
    q1.pop();

    cout<<"Empty->"<<q1.empty()<<endl;

    return 0;
}