// calculate the tree is balanced or not
//  time complexity is O(n^2) as we have traversed each node of the tree twice to calculate height and to
//  for travesing
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
int height(node *root)
{
    if (!root)
    {
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh, rh) + 1;
}
bool balanced(node *root)
{
    if (!root)
    {
        return true;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    int curr = lh + rh + 1;
    return abs(lh - rh) <= 1;
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
    root3->left->right->left = new node(4);
    node *root4 = new node(6);
    root4->left = new node(8);
    root4->right = new node(9);

    // cout << balanced(root3);
    if (balanced(root4))
    {
        cout << "Tree is balanced\n";
    }
    else
    {
        cout << "Tree is not balanced\n";
    }
    return 0;
}