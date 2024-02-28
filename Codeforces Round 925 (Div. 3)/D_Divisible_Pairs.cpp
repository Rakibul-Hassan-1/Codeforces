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

int custom(int p, int x)
{
    return (x - (p % x)) % x;
}

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> arr(n);
    map<int, map<int, int>> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i] % x][arr[i] % y]++;
    }
    ll tot = 0;
    for (auto i : arr)
        tot += mp[custom(i, x)][i % y] - (i % x == custom(i, x));
    cout << (tot >> 1) << endl;
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
