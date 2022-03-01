
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *aptr=&a;
    cout<<*aptr<<endl;
    *aptr=20;
    cout<<*aptr<<endl;
    aptr++;
    cout<<aptr<<endl;
    
    cout<<&a<<endl;
    return 0;
}