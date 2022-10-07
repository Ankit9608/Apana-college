// // // Given a number , you have to find the three numbers such that their sum is equal to the given number
// // //  brute force approach - to traverse all the elements and for each elements find pair of number this will take O(n^3)
// // // optimal- first of all sort the given vector or array and fix a pointer and substract the value of that index from the given number then
// // // set a second pointer at the next of the first pointer and again substract the value of the second pointer element and check for the how much
// // // number is required after substraction if not present the change the second pointer and do so on after the 1 treaversal of second pointer
// // //  move the first pointer this will take O(n^2)time.
// // #include <iostream>
// // #include <bits/stdc++.h>
// // using namespace std;
// // bool check(vector<int> a, int k)
// // {
// //     int i = 0;
// //     sort(a.begin(), a.end());
// //     while (i < a.size() - 2)
// //     {
// //         int z = k - a[i];
// //         int j = i + 2;
// //         while (j < a.size())
// //         {
// //             z -= a[i + 1];
// //             if (a[j] == z)
// //             {
// //                 return true;
// //             }
// //             j++;
// //         }
// //         i++;
// //     }
// //     return false;
// // }
// // vector<int>threesum(vector<int>a,int k){
// //    vector<int>temp(3);
// //    sort(a.begin(),a.end());
// //    int i=0,z;
// //    while(i<a.size()-2){
// //          z-=a[i];
// //         int j=i+2;
// //         while(j<a.size()){
// //             z-=a[i+1];
// //             if(a[j]==z){
// //                 temp.push_back(a[i],a[])
// //             }
// //         }

// //    }

// // }
// // int main()
// // {
// //     vector<int> a = {1, 5, 3, 8, 9, 0};
// //     int k;
// //     cout << "enter the number\n";
// //     cin >> k;
// //     cout << check(a, k);
// //     // return 0;
// //     // vector<int>v(3);

// //     // if(!check(a,k)){
// //     // //   v= threesum(a,k);
// //     // cout<<"No such triplet\n";
// //     // }
// //     // else{
// //     //   v= threesum(a,k);

// //     // }
// //     // cout<<'(';
// //     // for(auto z:v){

// //     //     cout<<z<<" ";
// //     // }cout<<')'<<endl;

// //     // return 0;
// // }
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     bool flage = false;
//     vector<int> v(n);
//     for (auto &i : v)
//     {
//         cin >> i;
//     }
//     sort(v.begin(), v.end());
//     int k;
//     cin >> k;
//     for (int i = 0; i < n; i++)
//     {
//         int lo = i + 1, hi = n - 1;
//         while (lo < hi)
//         {
//             int current = v[i] + v[lo] + v[hi];
//             if (current == k)
//             {
//                 flage = true;
//             }
//             if (current > k)
//             {
//                 hi--;
//             }
//             else
//             {
//                 lo++;
//             }
//         }
//     }
//     if (flage)
//     {
//         cout << "find\n"
//              << endl;
//     }
//     else
//         cout << "Not found\n"
//              << endl;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    bool flage = false;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        int l = i + 1, h = n - 1;
        while (l < h)
        {
            int current = v[i] + v[l] + v[h];
            if (current == k)
            {
                flage = true;
            }
            if (current > k)
            {
                h--;
            }
            else
            {
                l++;
            }
        }
    }
    if (flage)
    {
        cout << "find\n";
    }
    else
    {
        cout << "Not find\n";
    }
    return 0;
}