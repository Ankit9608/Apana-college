#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n>65){
            cout<<"overload"<<endl;
        }
        else if(n<35){
            cout<<"underload"<<endl;
        }
        else{
            cout<<"normal"<<endl;
        }
    }
    return 0;
}