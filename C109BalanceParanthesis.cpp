#include<iostream>
#include<stack>
using namespace std;

int main(){

    string str1;
    cin>>str1;
    bool ans = true;

    stack<char> st;
    for(int i=0 ;i<str1.length(); i++){
        if(str1[i] == '[' || str1[i] == '{' || str1[i] == '('){
            st.push(str1[i]);
        }
        else if(str1[i] == ']'){
            if(st.top() == '['){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
        else if(str1[i] == '}'){
            if(st.top() == '{'){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
        else if(str1[i] == ')'){
            if(st.top() == '('){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}