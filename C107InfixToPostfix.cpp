#include <iostream>
#include <stack>
#include <math.h>

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
    // cin>>infixString;

    string res = "";

    for (int i = 0; i < infixString.length(); i++)
    {
        if ((infixString[i] >= '0' && infixString[i] <= '9') || (infixString[i] >= 'a' && infixString[i] <= 'z') || (infixString[i] >= 'A' && infixString[i] <= 'Z'))
        {
            res += infixString[i];
        }
        else if (infixString[i] == '(')
        {
            st.push(infixString[i]);
        }
        else if (infixString[i] == ')')
        {
            while (st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            int precOp = checkPrec(infixString[i]);
            while (!st.empty() && checkPrec(st.top()) > precOp)
            {
                res += st.top();
                st.pop();
            }
            st.push(infixString[i]);
        }
    }
    while (!st.empty())
    {
        res+=st.top();
        st.pop();
    }

    cout << res << endl;

    return 0;
}