#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
      int  n=sizeof(s);
        int a[sizeof(s)];
        for(int i=0;i<(n/2)-1;i++){
           a[s[i]]+=1;

        }
        for(int i=(n/2)+1;i<n;i++){
            a[s[i]]+=1;

        }
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                count++;
            }
        }
        if(count%2==0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    return 0;
}