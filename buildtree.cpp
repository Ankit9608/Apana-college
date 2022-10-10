// // build a tree by inorder and postorder
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int data;
//     node *left, *right;
//     node(int val)
//     {
//         data = val;
//         left = right = NULL;
//     }
// };
// // struct node *newnode(int val)
// // {
// //     struct node *Node = (struct node *)malloc(sizeof(struct node));
// //     Node->data = val;
// //     Node->right = NULL;
// //     Node->left = NULL;
// //     return (NULL);
// // }
// int search(int inorder[], int curr, int end)
// {
//     for (int i = 0; i <= end; i++)
//     {
//         if (inorder[i] == curr)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// node *buildtree(int inorder[], int postorder[], int end, int start)
// {

//     if (start > end)
//     {
//         return NULL;
//     }
//     static int idx = 6;
//     // node *root = newnode(postorder[idx]);
//     int curr = postorder[idx];

//     idx--;
//     // node *root = newnode(curr);
//     node *root = new node(curr);
//     if (start == end)
//     {
//         return root;
//     }
//     int pos = search(inorder, curr, end);

//     root->right = buildtree(inorder, postorder, end, pos + 1);
//     root->left = buildtree(inorder, postorder, pos - 1, start);
//     return root;
// }
// void print(node *root)
// {
//     if (!root)
//     {
//         return;
//     }
//     print(root->left);
//     cout << root->data << " ";
//     print(root->right);
// }
// int main()
// {
//     //    node* root=newnode(1);
//     //    root->left=newnode(2);
//     //    root->right=newnode(3);
//     //    root->left->left=newnode(4);
//     //    root->left->right=newnode(5);
//     //    root->right->left=newnode(6);
//     //    root->right->right=newnode(7);
//     int inorder[] = {4, 2, 5, 1, 6, 3, 7};
//     int postorder[] = {4, 5, 2, 6, 7, 3, 1};
//     node *z = buildtree(inorder, postorder, 6, 0);
//     print(z);
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
struct node *newnode(int val)
{
    struct node *Node = (struct node *)malloc(sizeof(struct node));
    Node->data = val;
    Node->left = Node->right = NULL;
    return (Node);
}
int search(int inorder[], int curr, int end)
{
    for (int i = 0; i <= end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}
node *buildtree(int inorder[], int postorder[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    static int idx = 6;
    int curr = postorder[idx];
    idx--;
    node *z = newnode(curr);
    if (start == end)
    {
        return z;
    }
    int pos = search(inorder, curr, end);
    z->right = buildtree(inorder, postorder, pos + 1, end);
    z->left = buildtree(inorder, postorder, start, pos - 1);
    return z;
}
void printInorder(node *root)
{
    if (!root)
    {
        return;
    }
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}
int main()
{
    int inorder[] = {4, 2, 5, 1, 6, 3, 7};
    int postorder[] = {4, 5, 2, 6, 7, 3, 1};
    node *root = buildtree(inorder, postorder, 0, 6);
    printInorder(root);
    return 0;
}