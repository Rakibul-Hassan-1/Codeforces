#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define ll long long
#define nl endl
#define pii pair<int, int>
#define all_occarance (ctrl + shift + v)
#define f1(n) for (int i = 0; i < n; i++)
#define f2(v, n) for (int i = v; i < n; i++)
using namespace std;
void solve()
{

    int n;
    cin >> n;

    vector<ll int> v(n);
    for (int i = 0; i < v.size(); i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    if (v[0] >= 0)
        cout << v[n - 1] << "\n";
    else
        cout << v[0] << "\n";
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
