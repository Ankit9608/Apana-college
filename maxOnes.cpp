// // given a string find out maximum number of consecutive ones from the string you are allowed to change
// // k zeros to 1 ; k is given by input;
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;
//     int k;
//     cin >> k;
//     int maxzero = 0, zero = 0;
//     int l = 0;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == '0')
//         {
//             zero++;
//         }
//         while (zero > k)
//         {
//             if (s[l] == '0')
//             {
//                 zero--;
//             }
//             l++;
//         }
//         maxzero = max(maxzero, i - l + 1);
//     }
//     cout << maxzero << endl;
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    int ans = 0, zero = 0;
    int l = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            zero++;
        }
        while (zero > k)
        {
            if (s[l] == '0')
            {
                zero--;
            }
            l++;
        }
        ans = max(ans, i - l + 1);
        return 0;
    }
    cout << ans << endl;
    return 0;
}