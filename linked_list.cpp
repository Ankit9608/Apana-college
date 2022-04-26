// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };

// void insert(node* &head,int val){
//     node* n=new node(val);
  
//     if(head==NULL){
//          head=n;
//         return;
//     }
//     node* temp=head;
//     while (temp->next!=NULL)
//     {
//           temp=temp->next;
//     }
//     temp->next=n;
    

// }
// void display(node* head){
//     node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// void insertAtStart(node* &head,int val){
//     node* n=new node(val);
//       n->next=head;
//       head=n;
// }
// bool search(node* &head,int key){
//     node* temp=head;
//     while(temp!=NULL){
//         if(temp->data==key){
//             return true;
//         }
//         temp=temp->next;
//     }
//     return false;
// }
// int main(){
//     node* head=NULL;
//     insert(head,1);
//     insert(head,2);
//     insert(head,3);
//     insertAtStart(head,5);
//     display(head);
//     cout<<search(head,5)<<endl;
    

// }


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


int main(){
    node* head=NULL;
     insert(head,3);
     insert(head,4);
     display(head);
}