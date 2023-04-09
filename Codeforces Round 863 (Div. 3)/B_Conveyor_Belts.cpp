#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define nl endl
#define all_occarance (ctrl + shift + a)
#define pii pair<int, int>

using namespace std;

void solve()
{
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    int ans = abs(x1 - x2) + abs(y1 - y2);
    if (x1 == x2 && x1 == 1 && x1 == n / 2)
    {
        ans += 2;
    }
    if (y1 == y2 && y1 == 1 && y1 == n / 2)
    {
        ans += 2;
    }
    if (x1 == x2 && (x1 == 1 || x1 == n))
    {
        ans += 1;
    }
    if (y1 == y2 && (y1 == 1 || y1 == n))
    {
        ans += 1;
    }
    cout << ans << '\n';
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
