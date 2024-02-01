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

ll nC2(ll n)
{
    return n * (n - 1) / 2;
}

ll nC3(ll n)
{
    return n * (n - 1) / 2 * (n - 2) / 3;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> freq;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    ll ans = 0;
    ll small = 0;

    for (auto x : freq)
    {
        ll val = x.first;
        ll cnt = x.second;
        ans += nC3(cnt);
        ans += nC2(cnt) * small;
        small += cnt;
    }

    cout << ans << endl;
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
