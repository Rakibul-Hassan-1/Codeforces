#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define fasterIO()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
    ll a, b, c;
    cin >> a >> b >> c;
    if (a < b)
        swap(a, b);
    ll ans = a - b, cnt = 0, mn = ans;
    for (int i = 60; i >= 0; i--)
    {
        ll bit_a = (a >> i) & 1;
        ll bit_b = (b >> i) & 1;

        if (bit_b == 0 && bit_a == 1 && cnt + (1ll << i) <= c)
        {
            if (ans >= 2 * (1ll << i))
            {
                cnt += (1ll << i);
                ans -= 2 * (1ll << i);
            }
            else
                mn = min(mn, ans + (2 * (1ll << i) - ans));
        }
    }
    cout << min(ans, mn) << endl;
}
int main()
{
    fasterIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
