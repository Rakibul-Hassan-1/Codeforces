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
    ll n, b, c, d;
    cin >> n >> b >> c >> d;
    ll x = (n - n % 7) / 7 + 1;
    x -= (n % 7 == 0 ? 1 : 0);
    ll l = 1, r = x;
    ll ans = x;

    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (b <= (mid + 1) / 2 * c + d * mid)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    
    ll x2 = (ans + 1) / 2, tot = x2 * c + d * ans;
    b = b - tot;
    ll temp = x2;
    b = max(b, 0LL);
    temp = temp + (b / c);
    temp = temp + (b % c != 0);
    cout << n - temp << " " << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
