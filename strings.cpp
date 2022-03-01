// // // // // // // #include<iostream>
// // // // // // // #include<algorithm>
// // // // // // // #include<string>
// // // // // // // using namespace std;
// // // // // // // int main(){
// // // // // // //     //erase,concatinate,empty,compare ,length,size,to_string,stoi,
// // // // // // //     string s1="acnboiejfs";
// // // // // // //     sort(s1.begin(),s1.end());    //include algorithm
// // // // // // //      cout<<s1;
// // // // // // //     // getline(cin,str);
// // // // // // //     // cout<<str;
// // // // // // //     // string s1(5,'n');
// // // // // // //     // cout<<s1;
// // // // // // //     // cin>>str;
// // // // // // //     // cout<<str;
// // // // // // //     return 0;
// // // // // // // }



// // // // // // #include<iostream>
// // // // // // #include<algorithm>
// // // // // // #include<string>
// // // // // // using namespace std;
// // // // // // int main(){
// // // // // //     string str="adsmvnosie";
// // // // // //     //convert into upper cases
// // // // // //     for(int i=0;i<str.size();i++){
// // // // // //         if(str[i]>='a'&&str[i]<='z')
// // // // // //         {
// // // // // //            str[i]-=32;
// // // // // //         }
// // // // // //     }
// // // // // //     cout<<str<<endl;;
// // // // // //     //convert to lover case
// // // // // //     for(int i=0;i<str.size();i++){
// // // // // //         if(str[i]>='A'&&str[i]<='Z'){
// // // // // //             str[i]+=32;
// // // // // //         }
// // // // // //     }
// // // // // //     cout<<str;
// // // // // //     return 0;
// // // // // // }



// // // // // #include<iostream>
// // // // // #include<algorithm>
// // // // // #include<string>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     string str="andlknoeif";
// // // // //     transform(str.begin(),str.end(),str.begin(),::toupper);
// // // // //     cout<<str<<endl;
// // // // //     transform(str.begin(),str.end(),str.begin(),::tolower);
// // // // //     cout<<str<<endl;
// // // // //     return 0;
// // // // // }


// // // // #include<iostream>
// // // // #include<algorithm>
// // // // #include<string>
// // // // using namespace std;
// // // // int main(){
// // // //     string str="987089938";
// // // //     sort(str.begin(),str.end(),greater<int>());
    
// // // //     cout<<str;
// // // //     return 0;
// // // // }

// // // #include<iostream>
// // // #include<algorithm>
// // // #include<string>
// // // using namespace std;
// // // int main(){
// // //     int freq[26];
// // //     string str="salknfiuehnfc";
// // //     for(int i=0;i<26;i++){
// // //         freq[i]=0;
// // //     }
// // //     for(int i=0;i<str.size();i++){
// // //           freq[str[i]-'a']++;
// // //     }
// // //     char ans='a';
// // //     int maxf=0;
// // //     for(int i=0;i<26;i++){
// // //          if(freq[i]>maxf){
// // //              maxf=freq[i];
// // //              ans=i+'a';
// // //          }
// // //     }
// // //     cout<<ans<<" "<<maxf;
// // //     return 0;
// // // }


// // // bit manupulation

// // #include<iostream>
// // using namespace std;
// // int getbit(int num,int pos){
// //     return ((num&(1<<pos))!=0);
// // }
// // int setbit(int num,int pos){
// //     return (num|(1<<pos));
// // }
// // int clearbit(int num,int pos){
// //     int mask=~(1<<pos);
// //     return(num&mask);
// // }
// // int main(){

// //     //cout<<getbit(5,2)<<endl;
// //     //cout<<setbit(5,1);
// //     cout<<clearbit(5,2);
// //     return 0;
// // }



// //check whether the given number is power of two or not;
// #include<iostream>
// using namespace std;
// bool powerof2(int n){
//     return (n&&!(n&(n-1)));   //n for base case if n=0

// }
// int main(){
//     cout<<powerof2(16);
//     return 0;
// }


//to print number of ones in given number

#include<iostream>
using namespace std;
int numberofones(int n){
    int count=0;
    while(n){
        n=n&(n-1);
        count++;
    }
    return count;
}
int main(){
    cout<<numberofones(19);
    return 0;
}