#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define TestCase() \
    int tc;        \
    cin >> tc;     \
    while (tc--)
#define fasterIO()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << 0 << endl;
        return;
    }

    vector<vector<int>> edges(n - 1, vector<int>(2, -1));
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < 2; j++)
            cin >> edges[i][j];
    }
    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < n - 1; i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (adj[i].size() == 1)
            count++;
    }
    cout << (count + 1) / 2 << endl;
}

int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
