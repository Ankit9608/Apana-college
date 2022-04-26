// // function overloading
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class apnacollege
// {
//     public:
//     void fun(){
//         cout<<"i am a function without arguement"<<endl;
//     }
//     void fun(int x){
//         cout<<"i am a function with arguement"<<endl;
//     }
//     void fun(double x){
//         cout<<"i am a function with double arguement"<<endl;
//     }
// };
// int32_t main(){
// apnacollege obj;
// obj.fun();
// obj.fun(4);
// obj.fun(6.4);

// }


// Operator overloading
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
class Complex
{
    private:
    int real ,imag;
    public:
    Complex(int r=0,int i=0){
       real=r;
       imag=i;
    }
    Complex operator + (Complex const &obj){
        Complex res;

        res.imag=imag+obj.imag;
        res.real=real+obj.real;
        return res;
        

    }
    void display(){
        cout<<real<<" +i"<<imag<<endl;
    }

};
int32_t main(){
        Complex c1(12,7),c2(6,7);
        Complex c3=c1+c2;
        c3.display();
        return 0;
}