// Optimal approach
// time complexity= O(n);
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left, *right;
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
bool balance(node *root, int *height)
{
    if (!root)
    {
        *height = 0;
        return true;
    }
    int lh = 0, rh = 0;
    if (balance(root->left, &lh) == false)
    {
        return false;
    }
    if (balance(root->right, &rh) == false)
    {
        return false;
    }
    *height = max(lh, rh) + 1;
    if (abs(lh - rh) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }

    // return abs(lh - rh) <= 1;
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
    node *root2 = new node(1);
    root2->left = new node(2);
    root2->left->left = new node(3);
    node *root3 = new node(1);
    root3->left = new node(2);
    root3->left->right = new node(3);
    root3->right = new node(4);
    root3->right->left = new node(5);
    root3->right->left->right = new node(6);

    int height = 0;
    if (balance(root3, &height))
    {
        cout << "Tree is balanced\n";
    }
    else
    {
        cout << "Tree is not balanced\n";
    }

    return 0;
}