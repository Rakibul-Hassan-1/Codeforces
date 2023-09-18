#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define ll long long
#define nl endl
#define pii pair<int, int>
#define all_occarance (ctrl + shift + a)
#define f1(n) for (int i = 0; i < n; i++)
#define f2(a, n) for (int i = a; i < n; i++)
using namespace std;
void solve()
{
    int prime[14] = {3, 5, 7, 11, 13, 17, 19, 21, 23, 27, 29, 31, 37, 41};
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        int a = 2;
        int b = n - 3;
        int c = 1;
        cout << a << " " << b << " " << c << endl;
    }
    else
    {
        int a, b, c, x, y;
        n--;
        c = 1;

        for (int i = 0; i < 15; i++)
        {
            x = prime[i];
            y = n - x;
            if (__gcd(x, y) == c)
            {
                a = x;
                b = y;
                break;
            }
        }
        cout << a << " " << b << " " << c << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
