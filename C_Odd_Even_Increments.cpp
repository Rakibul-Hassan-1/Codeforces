#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define ll long long
#define nl endl
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define pii pair<int, int>
#define all_occarance (ctrl + shift + v)
#define f1(n) for (int i = 0; i < n; i++)
#define f2(v, n) for (int i = v; i < n; i++)
using namespace std;

void solve()
{
    int n, x;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v[i] = x;
    }
    bool ans = true;
    int p = v[0] % 2;

    for (int i = 0; i < n; i += 2)
    {
        if (v[i] % 2 == p)
            continue;
        ans = false;
    }

    if (n > 1)
    {
        p = v[1] % 2;

        for (int i = 1; i < n; i += 2)
        {
            if (v[i] % 2 == p)
                continue;
            ans = false;
        }
    }
    
    if (ans == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
