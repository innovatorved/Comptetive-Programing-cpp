#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int checkPrec(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{

    stack<char> st;

    string infixString = "(a-b/c)*(a/k-l)";
    // cin>>infixString;.

    string prefixres = "";

    // step1 : reverse the string and change the bracket
    //  ( -> )
    // ) -> (

    //  change bracket
    for(int i = 0; i<infixString.length(); i++){
        if(infixString[i] == '('){
            infixString[i] = ')';
        }
        else if(infixString[i] == ')'){
            infixString[i] = '(';
        }
    }
    reverse(infixString.begin() , infixString.end());

    for (int i = 0; i < infixString.length() ; i++)
    {
        if ((infixString[i] >= '0' && infixString[i] <= '9') || (infixString[i] >= 'a' && infixString[i] <= 'z') || (infixString[i] >= 'A' && infixString[i] <= 'Z'))
        {
            prefixres += infixString[i];
        }
        else if (infixString[i] == '(')
        {
            st.push(infixString[i]);
        }
        else if (infixString[i] == ')')
        {
            while (st.top() != '(')
            {
                prefixres += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            int precOp = checkPrec(infixString[i]);
            while (!st.empty() && checkPrec(st.top()) > precOp)
            {
                prefixres += st.top();
                st.pop();
            }
            st.push(infixString[i]);
        }
    }
    while (!st.empty())
    {
        prefixres+=st.top();
        st.pop();
    }
    reverse(prefixres.begin() , prefixres.end());
    cout << prefixres << endl;

    return 0;
}