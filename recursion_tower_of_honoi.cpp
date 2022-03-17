#include<bits/stdc++.h>
using namespace std;
void towerofhanoi(int n,char scr,char dest,char helper){
    if(n==0){
        return;
    }
        towerofhanoi(n-1,scr,helper,dest);
        cout<<"move from "<<scr<<" "<<"to"<<" "<<dest<<endl;
        towerofhanoi(n-1,helper,dest,scr);
}
int main(){
    
    towerofhanoi(3 ,'A','C','B');
    return 0;
}