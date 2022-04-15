#include<iostream>
#include<stack>

using namespace std;

class Queue{
    stack<int> s1;
    stack<int> s2;

    public :
        void push(int data){
            this->s1.push(data);
        }

        void pop(){
            if(s1.empty() && s2.empty()){
                cout<<"Queue is Empty"<<endl;
                return ;
            }
            if(s2.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            s2.pop();
        }

        int peek(){
            if(s1.empty() && s2.empty()){
                cout<<"Queue is Empty"<<endl;
                return -1;
            }
            if(s2.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            int topEle = s2.top();
            return topEle;
        }

        bool empty(){
            if(s1.empty() && s2.empty()){
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

    cout<<q1.empty()<<endl;

    cout<<q1.peek()<<endl;
    q1.pop();

    cout<<q1.peek()<<endl;
    q1.pop();

    cout<<q1.peek()<<endl;
    q1.pop();

    cout<<q1.peek()<<endl;
    q1.pop();

    cout<<q1.empty()<<endl;

    return 0;
}