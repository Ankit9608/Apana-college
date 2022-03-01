#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool sortedarray(int a[],int n){
    if(n==1){
        return true;
    }
    
    bool restarrray=sortedarray(a+1,n-1);
    return (a[0]<a[1]&&restarrray);
}
int main(){
    int a[]={1,2,3,4,5};
    cout<<sortedarray(a,5);
    return 0;
}