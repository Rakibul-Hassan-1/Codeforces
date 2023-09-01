#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define ll long long
#define endl "\n"
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define pii pair<int, int>
#define vector <int> vi
#define all_occarance (ctrl + shift + a)
#define f1(n) for (int i = 0; i < n; i++)
#define f2(a, n) for (int i = a; i < n; i++)

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i] >> b[i];
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] - b[i] > 0)
        {
            ans++;
        }
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
