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

vector<int> getDivisors(int n)
{
    vector<int> d;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            d.push_back(i);
            if (i != (n / i))
            {
                d.push_back(n / i);
            }
        }
    }
    return d;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll ans = v[0] - 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] > v[i - 1])
        {
            ans += v[i] - v[i - 1];
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
