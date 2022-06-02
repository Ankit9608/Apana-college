// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
// void insertathead(node *&head, int val)
// {
//     node *n = new node(val);
//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }
// void display(node *head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// int length(node *head)
// {
//     int l = 0;
//     node *temp = head;
//     while (temp != NULL)
//     {
//         l++;
//         temp = temp->next;
//     }
//     return l;
// }
// node *kappend(node *&head, int k)
// {
//     node *newhead;
//     node *newtail;
//     node *tail = head;
//     int l = length(head);
//     k = k % l;

//     int count = 1;

//     while (tail->next != NULL)
//     {
//         if (count == l - k)
//         {
//             newtail = tail;
//         }
//         if (count = l - k + 1)
//         {
//             newhead = tail;
//         }
//         tail = tail->next;
//         count++;
//     }
//     newtail->next = NULL;

//     tail->next = head;
//     return newhead;
// }

// int main()
// {
//     node *head = NULL;
//     int a[6] = {1, 2, 3, 4, 5, 6};
//     for (int i = 0; i < 6; i++)
//     {
//         insertathead(head, a[i]);
//     }
//     display(head);
//     node *newhead = kappend(head, 3);
//     display(newhead);
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertattail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    // cout << "NULL->";
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
// int length(node *&head)
// {
//     int l = 0;
//     node *temp = head;
//     while (temp != NULL)
//     {
//         l++;
//         temp = temp->next;
//     }
//     return l;
// }
int length(node *&head)
{
    int l = 0;
    node *temp = head;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
node *appendknode(node *head, int k)
{
    node *newtail;
    node *newhead;
    node *tail = head;
    int count = 1;
    int l = length(head);
    k = k % l;
    while (tail->next != NULL)
    {
        if (count == l - k)
        {
            newtail = tail;
        }
        if (count == l - k + 1)
        {
            newhead = tail;
        }
        count++;
        tail = tail->next;
    }
    newtail->next = NULL;
    tail->next = head;
    return newhead;
}

int main()
{
    node *head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    insertattail(head, 5);
    insertattail(head, 6);
    // int a[6] = {1, 2, 3, 4, 5, 6};
    // for (int i = 0; i < 6; i++)
    // {
    //     insertattail(head, a[i]);
    // }
    display(head);
    node *newhead = appendknode(head, 3);
    display(newhead);
}