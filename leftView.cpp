#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
void leftview(node *root)
{
    if (!root)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            node *z = q.front();
            q.pop();
            if (z->left)
            {
                q.push(z->left);
            }
            if (z->right)
            {
                q.push(z->right);
            }
            if (i == 0)
            {
                cout << z->data << " ";
            }
        }
    }
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    node *root1 = new node(1);
    root1->right = new node(2);
    root1->right->left = new node(3);
    root1->right->right = new node(4);
    leftview(root1);
    return 0;
}