// put even node after odd node
// // 1->2->3->4->5->6
// // ans= 1->3->5->2->4->6
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
// void InsertAtTail(node *&head, int val)
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
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }
// void EvenAfterOdd(node *&head)
// {
//     node *odd = head;
//     node *even = head->next;
//     node *evenStart = even;
//     while (odd->next != NULL && even->next != NULL)
//     {
//         odd->next = even->next;
//         odd = odd->next;
//         even->next = odd->next;
//         even = even->next;
//     }
//     if (odd->next != NULL)
//     {
//         even->next = NULL;
//     }
//     odd->next = evenStart;
// }
// int main()
// {
//     node *head = NULL;
//     InsertAtTail(head, 1);
//     InsertAtTail(head, 2);
//     InsertAtTail(head, 3);
//     InsertAtTail(head, 4);
//     InsertAtTail(head, 5);
//     InsertAtTail(head, 6);
//     InsertAtTail(head, 7);
//     display(head);
//     EvenAfterOdd(head);
//     display(head);
// }

// put odd nodes after even nodes
// 1->2->3->4->5->6->NULL
// ans 2->4->6->1->3->5->null;

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
void InsertAtTail(node *&head, int val)
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
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void PutOddAfterEven(node *&head)
{
    node *odd = head;
    node *even = head->next;
    node *evenStart = head->next;
    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    if (odd->next != NULL)
    {
        odd->next = NULL;
    }

    even->next = head;
    head = evenStart;
}
int main()
{
    node *head = NULL;
    InsertAtTail(head, 1);
    InsertAtTail(head, 2);
    InsertAtTail(head, 3);
    InsertAtTail(head, 4);
    InsertAtTail(head, 5);
    InsertAtTail(head, 6);
    InsertAtTail(head, 7);
    InsertAtTail(head, 8);
    InsertAtTail(head, 9);
    display(head);
    PutOddAfterEven(head);
    display(head);
}