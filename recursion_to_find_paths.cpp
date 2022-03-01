#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countpath(int a,int b){
    if(a==b){
        return 1;
    }
    if(a>b){
        return 0;
    }
    int count=0;
    for(int i=1;i<=b;i++){
        count+=countpath(a+i,b);
    }
    return count;
}
int main(){
    cout<<countpath(0,3);
    return 0;
}