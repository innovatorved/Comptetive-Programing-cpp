#include<iostream>
#include<stack>
using namespace std;

void InsertAtBottom(stack<int> &st , int element){
    if(st.empty()){
        st.push(element);
        return;
    }
    int ele = st.top();
    st.pop();
    InsertAtBottom(st , element);
    st.push(ele);
}

void ReverseStack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int element = st.top();
    st.pop();
    ReverseStack(st);
    InsertAtBottom(st , element);
}

int main(){
    stack<int> st;
    st.push(2);
    st.push(4);
    st.push(7);
    st.push(6);

    ReverseStack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    return 0;
}