 //find smalllest prime factores of given number
 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
 void primefactors(int n){
     int prime[100]={0};
     for(int i=2;i<=n;i++){
        prime[i]=i;
      }
      for(int i=2;i<=n;i++){
          if(prime[i]==i){
              for(int j=i*i;j<=n;j+=i){
                 if(prime[j]==j){
                     prime[j]=i;
                 }
              }
          }
      }
      while(n!=1){
          cout<<prime[n]<<" ";
          n/=prime[n];
      }

 }
 int main(){
     int n;
     cin>>n;
     primefactors(n);
     return 0;
 }