// method one
// push opration is costly
//  take two queue and insert latest element in q2 then bring all q1 element in q2 and swap
//  these two queues with the help of temperary third queue
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

class Stack
{
    int n;
    queue<int> q1;
    queue<int> q2;

public:
    Stack()
    {
        n = 0;
    }
    void push(int x)
    {
        q2.push(x);
        n++;
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    void pop()
    {
        // if (q1.front() == -1 || q1.front() > q1.back())
        // {
        //     cout << "stack is empty:";
        //     return;
        // }
        q1.pop();
        n--;
    }
    int top()
    {
        return q1.front();
    }
};
int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.top() << endl;
    st.push(5);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
}