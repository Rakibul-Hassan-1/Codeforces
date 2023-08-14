#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
        cin >> c[i];
    if (k >= n)
    {
        cout << "YES\n";
        return;
    }
    for (int x = 1; x <= n; x++)
    {
        if (n % x || x > k)
            continue;
        vector<vector<int>> pos(n + 1);
        for (int i = 0; i < n; i++)
            pos[c[i]].push_back(i % x);
        bool ok = false;
        for (int i = 1; i <= n; i++)
        {
            sort(pos[i].begin(), pos[i].end());
            ok |= pos[i].size() >= x && pos[i][x - 1] == x - 1;
        }
        if (ok)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
