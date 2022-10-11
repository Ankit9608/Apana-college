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
// int sum(node *root)
// {
//     if (!root)
//     {
//         return 0;
//     }
//     sum(root->left);
//     sum(root->right);
//     static int sumt = 0;
//     // sumt += root->data;
//     if (root->left != NULL)
//     {
//         sumt += root->left->data;
//     }
//     if (root->right != NULL)
//     {
//         sumt += root->right->data;
//     }
//     return ;
// }
void sum(node *root, int *sumt)
{
    if (!root)
    {
        return;
    }

    sum(root->left, sumt);
    sum(root->right, sumt);
    *sumt = root->data;

    return;
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
    root2->left = new node(3);
    int sumt = 0;
    sum(root2, &sumt);
    cout << sumt;
    return 0;
}