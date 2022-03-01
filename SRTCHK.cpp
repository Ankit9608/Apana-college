#include<bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
       int j=n;
       while(j>0){
           if(a[j]!=b[j]){
               break;
           }
           j--;
       }
       if(j>0){
           cout<<"N0"<<endl;
       }
       else{
           cout<<"YES"<<endl;
       }
    }
    return 0;
}