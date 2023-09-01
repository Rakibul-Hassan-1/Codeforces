#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 10;
vector<ll> g[N];
int v[N];

double DFS(ll u)
{
    double ans = 0;
    ll cnt = 0;
    for (auto child : g[u])
    {
        if (v[child] == 0)
        {
            v[child] = 1;
            cnt++;
            ans = ans + DFS(child);
        }
    }
    if (cnt == 0)
        return 0;

    return 1 + (ans / cnt);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (ll i = 1; i <= n; i++)
    {
        ll u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    v[1] = 1;
    
    printf("%.15f\n", DFS(1));

    return 0;
}
