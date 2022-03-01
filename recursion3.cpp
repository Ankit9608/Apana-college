// factorial
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    
    int prevfactor=fact(n-1);
    return n*prevfactor;
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}