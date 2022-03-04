#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        int a[n];
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
            max=(max,a[i]);
        }
        int b[max+1]={0};
        for(int i=0;i<n;i++){
           b[a[i]]+=1;

        }
        for(int i=0;i<max+1;i++){
              if(b[i]>1){
                  count=count+b[i]-1;
              }
        }
        cout<<count<<endl;
    }
    return 0;
}