// // use method second for implementation of stacks using queue in which we use two queues one
// // here posh operation is costly. push element in que one and for pop operation bring all
// // element except the last element in q2 and pop the one remainnig element in q1 and the
// // swap the two queues with the help of third queue;
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class Stack
// {
//     int n;
//     queue<int> q1;
//     queue<int> q2;

// public:
//     Stack()
//     {
//         n = 0;
//     }
//     void push(int x)
//     {
//         q1.push(x);
//         n++;
//     }
//     void pop()
//     {
//         if (q1.empty())
//         {
//             cout << "queue is empty" << endl;
//         }
//         while (q1.size() != 1)
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }
//         q1.pop();
//         n--;
//         q1 = q2;
//     }
//     int top()
//     {
//         if (q1.empty())
//         {
//             cout << "queue is empty" << endl;
//             return -1;
//         }
//         while (q1.size() != 1)
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }
//         int ans = q1.front();
//         q2.push(ans);
//         queue<int> temp = q1;
//         q1 = q2;
//         q2 = temp;

//         return ans;
//     }
// };
// int main()
// {
//     Stack st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     cout << st.top() << endl;
//     st.pop();
//     cout << st.top() << endl;
//     st.push(5);
//     cout << st.top() << endl;
// }
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int n;
    queue<int> q1;
    queue<int> q2;
    Stack()
    {
        n = 0;
    }
    void push(int x)
    {
        q1.push(x);
        n++;
    }
    void pop()
    {
        if (q1.empty())
        {
            cout << "queue is empty" << endl;
            return;
        }
        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        n--;
        q1 = q2;
    }
    int top()
    {
        if (q1.empty())
        {
            cout << "queue is empty" << endl;
            return -1;
        }
        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q2.push(ans);
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
        return ans;
    }
    bool empty()
    {
        if (q1.empty())
        {
            return true;
        }
        return false;
    }
};
int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    st.push(6);
    cout << st.top() << endl;
}