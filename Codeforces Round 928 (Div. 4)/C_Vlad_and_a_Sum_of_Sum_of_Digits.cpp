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

ll sovle(ll n)
{
    if (n < 10)
        return n * (n + 1) / 2;
    ll sum = 0;
    ll d = 1;

    while (n / d > 0)
    {
        ll dgt = (n / d) % 10;
        ll h = n / (d * 10);
        ll lower = n - (n / d) * d;
        sum += h * 45 * d;
        sum += (dgt * (dgt - 1) / 2) * d;
        sum += (lower + 1) * dgt;
        d *= 10;
    }

    return sum;
}
int main()
{
    fasterIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        cout << sovle(n) << endl;
    }

    return 0;
}
