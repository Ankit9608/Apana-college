// reverse a sentence using stack
#include <iostream>
#include <stack>
#define n 100
using namespace std;
string reverseString(string s)
{
    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    {
        string a = "";
        while (s[i] != ' ' && i < s.length())
        {
            a += s[i];
            i++;
        }
        st.push(a);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
int main()
{
    string s;
    cin >> s;

    reverseString(s);
}
