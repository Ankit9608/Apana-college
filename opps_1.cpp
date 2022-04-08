// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class student{
//     public:
//     string name;
//     int age;
//     bool gender;
//     void printinfo(){
        
//         cout<<"NAME=";
//         cout<<name<<endl;
//         cout<<"age=";
//         cout<<age<<endl;
//         cout<<"gender=";
//         cout<<gender<<endl;
        

//     }

// };
// int main(){
//     student a[3];
//     for(int i=0;i<3;i++){
//         cout<<"NAME=";
//         cin>>a[i].name;
//         cout<<"age=";
//         cin>>a[i].age;
//         cout<<"gender=";
//         cin>>a[i].gender;
//     }
//     for(int i=0;i<3;i++){
//       a[i].printinfo();
//     }
// }



// below used set function to access the private attribute which is
// name. Note that by default attributes are private in class if not 
// specified;
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class student{
//     string name;

//     public:
//     int age;
//     bool gender;
//     void setfuct(string s){
//         name=s;
//     }
//     void printinfo(){
        
//         cout<<"NAME=";
//         cout<<name<<endl;
//         cout<<"age=";
//         cout<<age<<endl;
//         cout<<"gender=";
//         cout<<gender<<endl;
        

//     }

// };
// int main(){
//     student a[3];
//     for(int i=0;i<3;i++){
//         string s;
//         cout<<"NAME=";
//         cin>>s;
//         a[i].setfuct(s);
//         cout<<"age=";
//         cin>>a[i].age;
//         cout<<"gender=";
//         cin>>a[i].gender;
//     }
//     for(int i=0;i<3;i++){
//       a[i].printinfo();
//     }
// }


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class student{
    string name;

    public:
    int age;
    bool gender;
    student(){    // default constructor
       
        cout<<"default constructor"<<endl;
    }
    student(string s,int a,bool g){ // parameterized constructor
      cout<<"parameterised connstructor"<<endl;
        name=s;
        age=a;
        gender=g;
    }
    student(student &a){
        cout<<"copy constructor";
        age=a.age;
        gender=a.gender;
    }
    // ~student(){
    //     cout<<"destructoer called"<<endl;
    // }

    void setfuct(string s){
        name=s;
    }
    void getname(){
        cout<<name<<endl;
    }
    
    void printinfo(){
        
        cout<<"NAME=";
        cout<<name<<endl;
        cout<<"age=";
        cout<<age<<endl;
        cout<<"gender=";
        cout<<gender<<endl;
        

    }
    bool operator ==(student &a){
        if(name==a.name && age==a.age&&gender==a.gender){
            return true;
        }
        return false;
    }

};
int main(){
    // student a[3];
    // for(int i=0;i<3;i++){
    //     string s;
    //     cout<<"NAME=";
    //     cin>>s;
    //     a[i].setfuct(s);
    //     cout<<"age=";
    //     cin>>a[i].age;
    //     cout<<"gender=";
    //     cin>>a[i].gender;
    // }
    // for(int i=0;i<3;i++){
    //   a[i].printinfo();
    // }
    student a("urvi",21,1);
    // a.printinfo();
    student b=a;
    // b.printinfo();
    student c=a;
    student d;
    
    if(b==a){
        cout<<"Same";
    }
    else{
        cout<<"not same";
    }
    return 0;
        
}