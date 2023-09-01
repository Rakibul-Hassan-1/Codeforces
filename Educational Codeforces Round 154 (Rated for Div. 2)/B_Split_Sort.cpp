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
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < a.size(); i++)
        cin >> a[i];

    vector<int> pos(n + 1);

    for (int i = 0; i < n; i++)
        pos[a[i]] = i;

    int ans = 0;

    for (int i = 1; i < n; i++)
        ans += pos[i + 1] < pos[i];

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
