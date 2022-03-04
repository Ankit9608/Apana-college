// item   0      1      2
// wt[i]  10     20     30
// val[i] 100    50     150         limit of knapsack = W=50
// maax value is when 0th and 2nd is taken
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int knapsack(int value[],int wt[],int w,int n){
    if(n==0 || w==0){
        return 0;
    }
    if(wt[n-1]>w){
        return knapsack(value,wt,w,n-1);  //if weight more then capacity we cant incllude that 
                                        //that iten.

    }
    // first for inclusion of value and second function when excluded
    // find max of these function because we want as more valuable items
    return max(knapsack(value,wt,w-wt[n-1],n-1)+value[n-1],knapsack(value,wt,w,n-1));

}
int main(){
    int value[]={100,50,150};
    int wt[]={10,20,30};
    int w=50;
    cout<<knapsack(value,wt,w,3);
}