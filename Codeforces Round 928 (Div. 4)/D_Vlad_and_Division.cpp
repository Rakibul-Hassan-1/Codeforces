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
    vector<int> val;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            val.push_back(i);
            if (i != (n / i))
            {
                val.push_back(n / i);
            }
        }
    }
    return val;
}

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    int ans = 0, x, y, val = (1LL << 31) - 1;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        y = val ^ x;
        if (mp[x] == 0)
        {
            ans++;
            mp[y]++;
        }
        else
            mp[x]--;
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
