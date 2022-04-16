#include<bits/stdc++.h>
using namespace std;

class Stack{
    queue<int> q1;
    queue<int> q2;
    int n = 0;
    public:
    void push(int data){
        q2.push(data);
        n++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        // set q1 , q2 = q2 , q1
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void pop(){
        if(n==0){
            cout<<"Underflow"<<endl;
            return;
        }
        q1.pop();
        n--;
    }

    int top(){
        if(n==0){
            cout<<"Underflow"<<endl;
            return -1;
        }
        return q1.front();
    }

    bool empty(){
        if(n==0){
            return 0;
        }
        return 1;
    }
};


class Stack2{
    queue<int> q1;
    queue<int> q2;
    int n = 0;
    public:
    void push(int data){
        q1.push(data);
        n++;
    }

    void pop(){
        if(n==0){
            cout<<"Underflow"<<endl;
            return;
        }
        while (!q1.empty())
        {
            if(q1.size() == 1){
                q1.pop();
                n--;
                break;
            }
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;        
    }

    int top(){
        if(n==0){
            cout<<"Underflow"<<endl;
            return -1;
        }
        return q1.back();
    }

    bool empty(){
        if(n==0){
            return 0;
        }
        return 1;
    }
};

int main(){
    Stack s1;

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);

    cout<<"Empty->"<<s1.empty()<<endl;    
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();

    cout<<s1.top()<<endl;
    s1.pop();

    cout<<"Empty->"<<s1.empty()<<endl;

    
    Stack2 s2;
    s2.push(1);
    s2.push(2);
    s2.push(3);
    s2.push(4);

    cout<<"Empty->"<<s2.empty()<<endl;    
    cout<<s2.top()<<endl;
    s2.pop();
    cout<<s2.top()<<endl;
    s2.pop();
    cout<<s2.top()<<endl;
    s2.pop();
    cout<<s2.top()<<endl;
    s2.pop();

    cout<<s2.top()<<endl;
    s2.pop();

    cout<<"Empty->"<<s2.empty()<<endl;

    return 0;
}