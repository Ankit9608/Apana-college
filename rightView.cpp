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
// void rightview(node* root,int * height,vector<int>&right){
//     if(root==NULL)
//     {
//        * height=0;
//         return;
//     }
//     map< int, int>mp;
//     int lh=0,rh=0;
//     rightview(root->right,&lh,right);
//     rightview(root->left,&rh,right);
//     *height=max(lh,rh)+1;
//     if(!mp[*height]){
//         mp[*height]=root->data;
//     }

// }
void rightview(node *root)
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
                q.push(z->left);
            if (z->right)
                q.push(z->right);
            if (i == n - 1)
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
    // int height=0;
    // vector<int >right;

    // rightview(root,&height,right);
    rightview(root);
    return 0;
}