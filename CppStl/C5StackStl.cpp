#include<iostream>
#include<stack>
using namespace std;

int main(){
    // Initialize an string type Stack
    stack<string> s;
    s.push("Ved");
    s.push("Prakash");
    s.push("Gupta");

    cout<<"Top-Element-->"<<s.top()<<endl;
    // pop last element and check top
    cout<<endl<<"---pop last element and check top"<<endl;
    s.pop();
    cout<<s.top()<<endl;

    cout<<"Size-->"<<s.size()<<endl;

    cout<<"Is Empty-->"<<s.empty()<<endl;

    return 0;
}