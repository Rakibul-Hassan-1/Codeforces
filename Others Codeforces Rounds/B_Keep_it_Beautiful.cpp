#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define ll long long
#define nl endl
#define pb push_back
#define pii pair<int, int>
#define all_occarance (ctrl + shift + a)
#define f1(n) for (int i = 0; i < n; i++)
#define f2(a, n) for (int i = a; i < n; i++)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (auto &e : a)
        cin >> e;

    string ans = "";
    vector<int> x;

    int ok = 0;

    for (auto e : a)
    {
        if (!ans.size())
        {
            ans += '1';
            x.pb(a[0]);
            continue;
        }

        if (e >= x.back() && !ok)
        {
            x.pb(e);
            ans += '1';
        }
        else if (!ok && e <= x.front())
        {
            ok = 1;
            x.pb(e);
            ans += '1';
        }
        else if (ok && e >= x.back() && e <= x.front())
        {
            ok = 1;
            x.pb(e);
            ans += '1';
        }
        else
            ans += '0';
    }

    cout << ans << "\n";
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
