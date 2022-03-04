#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int tilescounting(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tilescounting(n-1)+tilescounting(n-2);
}
int main(){
   cout<< tilescounting(4);
    return 0;
}