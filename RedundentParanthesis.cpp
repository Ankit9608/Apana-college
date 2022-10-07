// check whether redundent parenthesis are present in the given expression or not
#include <iostream>
#include <stack>
#include <string>
#include <bits/stdc++.h>
using namespace std;
bool redundent(string s)
{
    if (s == "")
    {
        return false;
    }
    bool flage = false;
    stack<char> st;
    for (auto a : s)
    {
        if (a == '+' or a == '-' or a == '*' or a == '/')
        {
            st.push(a);
        }
        else if (a == '(')
        {
            st.push(a);
        }
        else if (a == ')')
        {
            if (st.top() == '(')
                flage = true;
            while (st.top() == '+' or st.top() == '-' or st.top() == '*' or st.top() == '/')
            {
                st.pop();
            }
        }
    }
    return flage;
}
int main()
{
    string s;
    cin >> s;
    cout << redundent(s);
    return 0;
}
