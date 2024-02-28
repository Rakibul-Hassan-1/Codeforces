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
ll bet(ll loss, ll k)
{
    return (loss + k - 1) / (k - 1);
}

void solve()
{
    ll k, x, a;
    cin >> k >> x >> a;
    ll u = 0;
    bool canWin = true;
    for (int i = 0; canWin && i < x; i++)
    {
        ll v = bet(u, k);
        u += max(v, 1LL);
        canWin = u <= a;
    }
    if (k * (a - u) > a)
        yes;
    else
        no;
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
