#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define ll long long
#define nl endl
#define pii pair<int, int>
#define all_occarance (ctrl + shift + a)
#define f1(n) for (int i = 0; i < n; i++)
#define f2(a, n) for (int i = a; i < n; i++)
using namespace std;

int cal(int n, int k)
{
    if (k > n / 2)
    {
        return k - n / 2;
    }
    else
    {
        return n / 2 - k + 1;
    }
}
void solve()
{
    int n;
    pii p1, p2;
    cin >> n >> p1.first >> p1.second >> p2.first >> p2.second;
    int f1 = max(cal(n, p1.first), cal(n, p1.second));
    int f2 = max(cal(n, p2.first), cal(n, p2.second));
    cout << abs(f1 - f2) << endl;
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
