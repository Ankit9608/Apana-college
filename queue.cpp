#include <iostream>
#include <bits/stdc++.h>
#define n 20
class queue
{
    int *arr;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[20];
        front = back = -1;
    }
    void push(int x)
    {
        if (back == n - 1)
        {
            std::cout << "queue is overflow";
            return;
        }
        if (front == -1)
        {
            front++;
        }
        back++;
        arr[back] = x;
    }
    void pop()
    {
        if (front == -1 || front > back)
        {
            std::cout << "\nqueue is empty";
            return;
        }
        front++;
    }
    int peek()
    {
        if (front == -1 || front > back)
        {
            std::cout << "\nqueue is empty";
            return -1;
        }
        return arr[front];
    }
    bool empty()
    {
        if (front == -1 || front > back)
        {
            return true;
        }
        return false;
    }
};
int main()
{

    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    std::cout << q.peek();
    q.pop();
    std::cout << "\n"
              << q.peek();
    q.pop();
    std::cout << "\n"
              << q.peek();
    q.pop();
    std::cout << "\n"
              << q.peek();
    q.pop();
    std::cout << "\n"
              << q.peek();
    q.pop();

    std::cout << "\n"
              << q.peek();
    q.pop();
}