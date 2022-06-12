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
void insertathead(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}
void display(node *head)
{
    node *temp = head;
    do
    {
        /* code */
        cout << temp->data << "->";
        temp = temp->next;

    } while (temp != head);
    cout << "NULL" << endl;
}
void insertattail(node *&head, int val)
{
    if (head == NULL)
    {
        insertathead(head, val);
        return;
    }
    node *n = new node(val);
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}
void deleteathead(node *&head)
{
    node *todelete = head;
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    head = head->next;
    delete todelete;
}
void deletion(node *&head, int pos)
{
    if (pos == 1)
    {
        deleteathead(head);
        return;
    }
    int count = 1;
    node *temp = head;
    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
} /*
void deletionbyvalue(node *&head, int val)
{

    if (val == head->data)
    {
        node *todelete = head;
        node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = head->next;
        head = head->next;
        delete todelete;
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    if (temp->next->next == head)
    {
        node *todelete = temp->next;
        temp->next = head;
        delete todelete;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
} */
int main()
{
    node *head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    display(head);
    insertathead(head, 5);
    display(head);
    deletion(head, 3);
    display(head);
    deleteathead(head);
    display(head);
    //     deletionbyvalue(head, 4);
    //     display(head);
    //
}
