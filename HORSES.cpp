// // #include<iostream>
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int t;
// //     cin>>t;
// //     while(t--){
// //         int n;
// //         cin>>n;
// //         int a[n];
// //         for(int i=0;i<n;i++){
// //             cin>>a[i];
// //         }
// //         if(n==1){
// //             cout<<"-1";
// //             return 0;

// //         }
// //         else{
// //         int curdiff=0;
// //         int mindiff=INT_MAX;
// //         for(int i=0;i<n;i++){
// //             for(int j=i+1;j<=n;j++){
// //                 curdiff=a[i]-a[j];
// //                 curdiff=abs(curdiff);
// //                 mindiff=min(curdiff,mindiff);
// //             }
// //         }
// //         cout<<mindiff<<endl;
// //         }
// //     }
// //     return 0;
// // }


// #include<iostream>
// #include <algorithm>
// #define abs(a) a>0?a:(-a)
 
// using namespace std;
 


 
// int main(){
// 	int t,n;
// 	cin>>t;
    
	
// 	while(t--){
// 		cin>>n;
// 		long a[n],diff=1000000000;
// 		for(int i=0;i<n;i++){
// 			cin>>a[i];
// 		}
// 		sort( a, a + n);
// 		for(int i=0;i<n;i++){
// 			long temp = abs((a[i]-a[i+1]));
				
// 				if(temp<diff){
// 					diff=temp;
// 				}
// 		}
		
// 		cout<<diff<<endl;
			
// 	}
// 	return 0;
// }




#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int diff=INT_MAX;
       int  currdiff=0;
        for(int i=1;i<n;i++){
            
                currdiff=a[i]-a[i-1];
            
                currdiff=abs(currdiff);
               if(currdiff<diff){
                diff=currdiff;
            
            }
        }
        cout<<diff<<endl;
    }
    return 0;
}