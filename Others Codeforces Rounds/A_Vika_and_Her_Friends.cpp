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
    int n, m, k;
    cin >> n >> m >> k;
    int x, y;
    cin >> x >> y;
    string ans = "YES\n";
    for (int i = 0; i < k; ++i)
    {
        int xx, yy;
        cin >> xx >> yy;
        if ((x + y) % 2 == (xx + yy) % 2)
        {
            ans = "NO\n";
        }
    }
    cout << ans;
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
