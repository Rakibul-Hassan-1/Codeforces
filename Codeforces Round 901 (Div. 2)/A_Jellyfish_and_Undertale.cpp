//....................................<In the name of Allah>...............................//

//.................................<Bismillahir Rahmanir Rahim>...................................//
// Author : Rakibul Hassan

#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define pii pair<int, int>
#define MOD = 1e9;
using namespace std;
void solve()
{
    int a, b, n;
    cin >> a >> b >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        x[i] = min(x[i], a - 1);
    }

    long long ans = b;

    for (int i = 0; i < n; i++)
    {
        ans += x[i];
    }
    cout << ans << endl;
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
