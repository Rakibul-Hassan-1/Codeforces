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
    vector<int> a(n + 4);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    if (n == 1)
    {
        cout << a[1] - 1 << '\n';
        return;
    }

    vector<int> v(n + 4);
    int m = 1;
    v[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        if (a[i] != v[m - 1])
        {
            v[m++] = a[i];
        }
    }
    ll ans = 0;
    for (int i = 0; i < m - 1; i++)
    {
        if (v[i] < v[i + 1])
        {
            ans += (v[i + 1] - v[i]);
        }
    }

    cout << ans << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
