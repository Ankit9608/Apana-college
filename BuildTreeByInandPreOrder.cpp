// // // given a preorder and postorder of a tree build atree
// // #include <iostream>
// // #include <bits/stdc++.h>
// // using namespace std;
// // struct node
// // {
// //     int data;
// //     node *left;
// //     node *right;
// //     node(int val)
// //     {
// //         data = val;
// //         left = right = NULL;
// //     }
// // };
// // int search(int inorder[], int curr, int end)
// // {
// //     for (int i = 0; i <= end;
// //          i++)
// //     {
// //         if (inorder[i] == curr)
// //         {
// //             return i;
// //         }
// //     }
// //     return -1;
// // }
// // node *buildTree(int preorder[], int postorder[], int start, int end)
// // {
// //     if (start > end)
// //     {
// //         return NULL;
// //     }
// //     static int idx = 0;
// //     int curr = preorder[idx];
// //     idx++;
// //     node *Node = new node(curr);
// //     if (start == end)
// //     {
// //         return Node;
// //     }
// //     int pos = search(postorder, curr, end);
// //     Node->left = buildTree(preorder, postorder, start, pos - 1);
// //     Node->right = buildTree(preorder, postorder, pos + 1, end);
// //     return Node;
// // }
// // void treePrint(node *root)
// // {
// //     if (root == NULL)
// //     {
// //         return;
// //     }
// //     treePrint(root->left);
// //     cout << root->data << " ";
// //     treePrint(root->right);
// // }
// // int main()
// // {
// //     int preorder[] = {1, 2, 4, 3, 5};
// //     int postorder[] = {4, 2, 1, 3, 5};
// //     node *root = buildTree(preorder, postorder, 0, 4);
// //     treePrint(root);
// //     return 0;
// // }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int data;
//     node *left;
//     node *right;
//     node(int val)
//     {
//         data = val;
//         left = right = NULL;
//     }
// };
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
// node *buildtree(int preorder[], int inorder[], int start, int end)
// {
//     if (start > end)
//     {
//         return NULL;
//     }
//     static int idx = 0;
//     int curr = preorder[idx];
//     idx++;
//     node *Node = new node(curr);
//     if (start == end)
//     {
//         return Node;
//     }
//     int pos = search(inorder, curr, end);
//     Node->left = buildtree(preorder, inorder, start, pos - 1);
//     Node->right = buildtree(preorder, inorder, pos + 1, end);
//     return Node;
// }
// void inorderPrint(node *root)
// {
//     if (!root)
//     {
//         return;
//     }
//     inorderPrint(root->left);
//     cout << root->data << " ";
//     inorderPrint(root->right);
// }

// int main()
// {

//     int preorder[] = {1, 2, 4, 3, 5};

//     int postorder[] = {4, 2, 1, 3, 5};
//     node *root = buildtree(preorder, postorder, 0, 4);
//     inorderPrint(root);
//     return 0;
// }

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
node *buildtree(int preorder[], int inorder[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    static int i = 0;
    int curr = preorder[i];
    i++;
    node *z = new node(curr);
    if (start == end)
    {
        return z;
    }
    int pos = search(inorder, curr, end);
    z->left = buildtree(preorder, inorder, start, pos - 1);
    z->right = buildtree(preorder, inorder, pos + 1, end);
    return z;
}
void printIorder(node *root)
{
    if (!root)
    {
        return;
    }
    printIorder(root->left);
    cout << root->data << " ";
    printIorder(root->right);
}
int main()
{
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 3, 5};
    node *root = buildtree(preorder, inorder, 0, 4);
    printIorder(root);
    return 0;
}