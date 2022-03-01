// // // //  #include<iostream>
// // // //  using namespace std;
// // // //  int main(){
// // // // int arr[]={10,20,30};
// // // // cout<<*arr<<endl;
// // // //  int *ptr=arr;
// // // //  for(int i=0;i<3;i++){
// // // //      cout<<*(arr+i)<<endl;
// // // //  }

// // // //  }
// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     int a=10;
// // //     int *p;
// // //     p=&a;
// // //     cout<<*p<<endl;

// // //     int **q=&p;
// // //     cout<<&a<<endl;
// // //     cout<<*q<<endl;
// // //     cout<<**q<<endl;
// // //     return 0;
// // // }


#include<iostream>
using namespace std;
void increament(int *a){
    *a++;
}
int main(){
    int a=2;
    int *ptr=&a;
    increament(&a);
    cout<<a;
    return 0;
}

// #include<iostream>
// using namespace std;
// void swap(int *a,int *b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;

// }
// int main(){
//     int a=2;
//     int b=3;
//     int *aptr=&a;
//     int *bptr=&b;
//     swap(&a,&b);  //aptr,bptr
//     cout<<a<<" "<<b;
//     return 0;
// }