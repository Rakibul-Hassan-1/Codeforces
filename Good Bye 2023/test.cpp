#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        ll k = ((ll)a * b / __gcd(a, b));
        if (k == b)
            cout << k * (b / a) << endl;
        else
            cout << k << endl;
    }

    return 0;
}
