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
    int n, x;
    cin >> n >> x;
    vector<int> v(n + 1);
    v[0] = 0;
    for (int i = 1; i < n + 1; i++)
        cin >> v[i];
    int mx = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, (v[i + 1] - v[i]));
        flag = true;
    }
    if (flag)
    {
        int mx2 = ((x - v[n]) * 2);
        mx = max(mx, mx2);
    }
    cout << mx << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
