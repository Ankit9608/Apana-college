// // given a string find out maximum lenght of substring without any repeation
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;
//     vector<int> dict(256, -1);
//     int maxLen = 0, start = -1;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (dict[s[i]] > start)
//         {
//             start = dict[s[i]];
//         }
//         dict[s[i]] = i;
//         maxLen = max(maxLen, i - start);
//     }
//     cout << maxLen << endl;
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int maxLen = 0, start = -1;
    vector<int> dict(256, -1);
    for (int i = 0; i < s.length(); i++)
    {
        if (dict[s[i]] > start)
        {
            start = dict[s[i]];
        }
        dict[s[i]] = i;
        maxLen = max(maxLen, i - start);
    }
    cout << maxLen << endl;
    return 0;
}