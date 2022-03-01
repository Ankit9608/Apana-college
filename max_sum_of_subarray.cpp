//given an inpute of array find the subarrays and which one has the maximumsum
//brute force approach
/*#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
 
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
               int sum=0;
            for(int k=i;k<=j;k++){
                sum+=a[k];
                //cout<<a[k]<<" "
                
            }//cout<<endl;
            maxsum=max(maxsum,sum);
        }
    }
    cout<<maxsum<<endl;
    return 0; 
} */
//time complexity is O(n3)

//optimal solution n2

/*
#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int currentsum[n+1];
    currentsum[0]=0;
    for(int i=1;i<=n;i++){
        currentsum[i]=currentsum[i-1]+a[i-1];
        
    }
    int maxsum=INT_MIN;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
            sum=currentsum[i]-currentsum[j];
            maxsum=max(maxsum,sum);
        }
    }
    cout<<maxsum;
    return 0;
}
*/


//kidanes algorithm optimal O(n)


#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int currentsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currentsum+=a[i];
        if(currentsum<0){
            currentsum=0;
        }
        maxsum=max(maxsum,currentsum);

    }
    cout<<maxsum;
    return 0;
    
} 