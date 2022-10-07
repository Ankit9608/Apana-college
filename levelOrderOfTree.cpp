// // #include<iostream>
// // #include<bits/stdc++.h>
// // using namespace std;
// // class node{
// //     int data;
// //     node* left,*right;
// //     public:
// //     // node(int val){
// //     //     data=val;
// //     //     left=right=NULL;
// //     // }
// //     node* newnode(int val){
// //     node* Node=(class node*)malloc(sizeof(node));
// //     Node->data=val;
// //     Node->left=Node->right=NULL;
// //     return (Node);

// // }
// // };

// // int main(){
// //  node root;
// //  root.newnode(1);
// //  root->left.newnode(2);

// // }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int data;
//     node *left, *right;
// };
// struct node *newnode(int val)
// {
//     struct node *Node = (struct node *)malloc(sizeof(node));
//     Node->data = val;
//     Node->left = Node->right = NULL;
//     return (Node);
// }
// // vector<int> inorder(node *root)
// void inorder(node *root)
// {
//     // vector<int> temp;
//     if (!root)
//     {
//         // return temp;
//         return;
//     }
//     queue<node *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         node *z = q.front();
//         cout << z->data << " ";
//         q.pop();
//         if (z->left)
//         {
//             q.push(z->left);
//         }
//         if (z->right)
//         {
//             q.push(z->right);
//         }
//         // q.pop();
//         // temp.push_back(z->data);
//     }
//     // return temp;
// }

// int main()
// {
//     node *root = newnode(1);
//     root->left = newnode(2);
//     root->right = newnode(3);
//     root->left->left = newnode(4);
//     root->left->right = newnode(5);
//     root->right->left = newnode(6);
//     root->right->right = newnode(7);
//     // vector<int> ans = inorder(root);
//     inorder(root);
//     // for (auto i : ans)
//     // {
//     //     cout << i << " ";
//     // }
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left, *right;
    // node(int val)
    // {
    //     data = val;
    //     left = right = NULL;
    // }
};
struct node *newnode(int val)
{
    // cout << "hello4" << endl;
    struct node *Node = (struct node *)malloc(sizeof(struct node));
    Node->data = val;
    Node->left = Node->right = NULL;
    return (Node);
}
void levelorder(node *root)
{
    // cout << "hello3" << endl;
    if (!root)
    {
        return;
    }
    // cout << "hello1" << endl;
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *z = q.front();
        q.pop();
        // cout << "hello" << endl;
        if (z != NULL)
        {
            cout << z->data << " ";
            if (z->left)
                q.push(z->left);
            if (z->right)
                q.push(z->right);
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
}
int main()
{
    // node *root = new node(1);
    // root->left = new node(2);
    // root->right = new node(3);
    // root->left->left = new node(4);
    // root->left->right = new node(5);
    // root->right->left = new node(6);
    // root->right->right = new node(7);
    struct node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->right->left = newnode(6);
    root->right->right = newnode(7);
    levelorder(root);
    return 0;
}