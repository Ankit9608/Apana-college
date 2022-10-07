#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int rainWater(vector<int> a)
{
    int n = a.size();
    int ans = 0;
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && a[s.top()] < a[i])
        {
            int curr = s.top();
            s.pop();
            if (s.empty())
            {
                break;
            }
            int diff = i - s.top();
            ans += (min(a[s.top()], a[i]) - curr) * diff;
        }
        s.push(i); // ans 1
    }
    return ans;
}
int main()
{
    vector<int> a = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << rainWater(a) << endl;
    return 0;
}