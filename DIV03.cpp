#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[10];
        int k;
        
        for(int i=0;i<10;i++){
            cin>>a[i];
        }
        cin>>k;
        int i=9;
        while(k>=a[i]){
            k=k-a[i];
            i--;
        }
        cout<<i+1<<endl;
    }
    return 0;
}