#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void InsertAtTail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return ;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    return;
}
void display(node* head){
    node* temp=head;
    cout<<"Head->";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
bool detectcycle(node* &head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }


    }
    return false;
}
void MakeCycle(node* &head,int pos){
    node* temp=head;
    node* startNode;
    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}
void RemoveCycle(node* &head){
    node* slow=head;
    node* fast=head;
    do
    {
        slow=slow->next;
        fast=fast->next;
    } while (slow!=fast);
    fast=head;
    
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    
    }
    slow->next=NULL;
      
}
  
int main(){
    node* head=NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    InsertAtTail(head,6);
    MakeCycle(head,1);
    cout<<detectcycle(head)<<endl;
    RemoveCycle(head);
    cout<<detectcycle(head)<<endl;
    display(head);
    // display(head);
    return 0;

}