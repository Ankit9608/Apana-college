#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    
        int n;
        cin>>n;
        int d;
        cin>>d;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
       for(int i=0;i<n-1;){
           if(a[i+1]-a[i]<=d){
               count++;
               i+=2;
           }
           else{
               i++;
           }
       }
        cout<<count<<endl;
    
    return 0;
}