#include<bits/stdc++.h>
using namespace std;
int binarytodecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans+=y*x;
        x*=2;
        n/=10;
        
    }
    return ans;

}
int32_t main(){
    int n;
    cin >>n;
    cout<< binarytodecimal(n)<<endl;

}