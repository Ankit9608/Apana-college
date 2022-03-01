#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int k;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        while(k--){
            
            int min=INT_MAX;
            for(int i=0;i<n;i++ ){
                if(a[i]<min){
                    min=a[i];
                }
                
            }
        }
    }
}