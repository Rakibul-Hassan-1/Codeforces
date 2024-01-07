#include <bits/stdc++.h>
#define ll long long
#define fasterIO()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll g = __gcd(a, b);
    if (a * b / g == b)
    {
        for (int i = 2; i * i <= b; i++)
        {
            if (i <= a and a % i == 0)
            {
                cout << b * i << endl;
                return;
            }
            else if (b % i == 0)
            {
                cout << b * i << endl;
                return;
            }
        }
        cout << b * b << endl;
    }
    else
        cout << a * b / g << endl;
}
int main()
{
    fasterIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
