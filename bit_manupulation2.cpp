//write a program to find a unique number in an array where all 
//numbers exepct one are present twice



//using XOR 
//  A    B     A^B 
//  0    0     0
//  0    1     1
//  1    0     1
//  1    1     0

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int unique1(int a[],int n){
   int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^a[i];

    }
    return xorsum;

}
int main(){
    int a[]={1,2,3,4,1,2,3};
    cout<<unique1(a,7)<<endl;
    return 0;
}


