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
    ll n, mx = 0;
    cin >> n;
    unordered_map<char, ll> cnt;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        cnt[c]++;
        mx = max(mx, cnt[c]);
    }
    if (mx > n / 2)
        cout << (2 * mx - n) << endl;

    else
    {
        if (n % 2 == 1)
            cout << 1 << endl;

        else
            cout << 0 << endl;
    }
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
