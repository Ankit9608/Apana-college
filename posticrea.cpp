#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 5, b;
    b = a++;
    cout << b << endl;
    cout << a << endl;
    b = a;
    cout << b << endl;

    return 0;
}