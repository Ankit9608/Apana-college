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
        int min=INT_MAX;
        int smin=min;
        for(int i=0;i<n;i++){
            if(a[i]<min){
               
                smin=min;
                 min=a[i];
            }
            else if(a[i]<smin){
                smin=a[i];
            }
        }
        cout<<min+smin<<endl;
    }
    return 0;
}
