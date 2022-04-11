#include<iostream>
#include<stack>
#include<math.h>

using namespace std;

int prefixEvaluation(string str1){
    stack<int> st;
    for(int i = str1.length()-1; i>=0; i--){
        if(str1[i] >= '0' && str1[i]<= '9'){
            st.push(str1[i]-'0');
        }
        else{
            int opt1 = st.top();
            st.pop();
            int opt2 = st.top();
            st.pop();

            switch(str1[i]){
                case '+':
                    st.push(opt1 + opt2);
                    break;

                case '-':
                    st.push(opt1 - opt2);
                    break;

                case '*':
                    st.push(opt1 * opt2);
                    break;

                case '/':
                    st.push(opt1 / opt2);
                    break;
                
                case '^':
                    st.push(pow(opt1 , opt2));
                    break;
            }
        }
    }
    return st.top();
}


int postfixEvaluation(string str1){
    stack<int> st;
    for(int i =0; i<=str1.length()-1; i++){
        if(str1[i] >= '0' && str1[i]<= '9'){
            st.push(str1[i]-'0');
        }
        else{
            int opt2 = st.top();
            st.pop();
            int opt1 = st.top();
            st.pop();

            switch(str1[i]){
                case '+':
                    st.push(opt1 + opt2);
                    break;

                case '-':
                    st.push(opt1 - opt2);
                    break;

                case '*':
                    st.push(opt1 * opt2);
                    break;

                case '/':
                    st.push(opt1 / opt2);
                    break;
                
                case '^':
                    st.push(pow(opt1 , opt2));
                    break;
            }
        }
    }
    return st.top();
}


int main(){
    string str1 = "-+7*45+20";
    cout<<"Prefix->"<<prefixEvaluation(str1)<<endl;
    string str2 = "563/-";
    cout<<"Postfix->"<<postfixEvaluation(str2)<<endl;

    return 0;
}