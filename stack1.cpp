#include <iostream>
#define n 100
using namespace std;
class stack
{
    char *arr;
    int top;

public:
    stack()
    {
        arr = new char[n];
        top = -1;
    }
    void push(char x)
    {
        if (top == n - 1)
        {
            cout << "Stack is overflow";
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is underflow" << endl;
            return;
        }
        top--;
    }
    char Top()
    {
        if (top == -1)
        {
            cout << "Stack is underflow" << endl;
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        return top == -1;
    }
};
int main()
{
    stack st;
    st.push('a');
    st.push('b');
    st.push('c');
    st.pop();
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    st.push('8');
    cout << st.Top() << endl;
}
