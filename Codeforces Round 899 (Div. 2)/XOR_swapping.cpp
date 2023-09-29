#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    cout << "-----------Swapping-----------" << endl;

    a = a ^ b;
    b = b ^ a;
    a = a ^ b;

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    return 0;
}