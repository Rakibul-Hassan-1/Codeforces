#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    int b = 5;
    cout << a << " " << b << endl;
    b = b ^ a;
    a = b ^ a;
    b = a ^ b;
    cout << a << " " << b << endl;

    return 0;
}