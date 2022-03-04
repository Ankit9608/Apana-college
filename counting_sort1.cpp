#include<iostream>
#include<bits/stdc++.h>
using namespace std;

     


int main(){
    int t;
     cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
        int k=a[0];
     for(int i=1;i<=n;i++){
       k=  max(k,a[i]);
     }
     int count[100]={0};
     for(int i=0;i<n;i++){
         count[a[i]]+=1;
      }
     for(int i=1;i<=k;i++){
         count[i]=count[i]+count[i-1];

       }
    
     int b[n];
     for(int i=n-1;i>=0;i--){
         b[--count[a[i]]]=a[i];
         
       }
     for(int i=0;i<n;i++){
         a[i]=b[i];
       }
    
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
     }
    cout<<endl;
    }

    return 0;
}
