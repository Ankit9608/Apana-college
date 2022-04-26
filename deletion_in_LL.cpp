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
void insert(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void Delete(node* head,int key){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
       DeleteAtHead(head);
       return;
    }
    node* temp=head;
    while(temp->next->data!=key){
        temp=temp->next;
    }
    node* a=temp->next;
    
    temp->next=temp->next->next;
    delete a;

    
}
void DeleteAtHead(node* &head){
       node* todelete=head;
       head=head->next;
       delete todelete;
}
int main(){
    node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,5);
    DeleteAtHead(head);
    DeleteAtHead(head);
    DeleteAtHead(head);
    DeleteAtHead(head);
    display(head);
}