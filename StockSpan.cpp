#include <bits/stdc++.h>
using namespace std;
vector<int> span(vector<int> a)
{
    vector<int> ans;
    stack<pair<int, int>> st;
    for (auto price : a)
    {
        int data = 1;

        while (!st.empty() && st.top().first <= price)
        {
            data += st.top().second;
            st.pop();
        }
        st.push({price, data});
        ans.push_back(data);
    }
    return ans;
}
int main()
{
    vector<int> a = {100, 80, 60, 70, 60, 75, 85}; //  { 80, 60, 70, 60, 75,  85,100} this code will not work for this array
    vector<int> res = span(a);                     //{1 1 2 1 4 6 1}
    // cout << a << endl;
    for (auto z : a)
        cout << z << " ";
    cout << endl;
    for (auto i : res)
        cout << i << " ";
    return 0;
}