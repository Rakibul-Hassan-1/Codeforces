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
    ll n, k, x;
    cin >> n >> k >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    ll xsum = 0;
    ll sum = 0, ans = 0, j = 0;
    int count = 0;
    for (int i = 0; i < x; i++)
        xsum += v[i];
    sum = accumulate(v.begin(), v.end(), sum) - xsum;
    ans = sum - xsum;
    for (int i = x; i < n; i++)
    {
        sum -= v[i];
        xsum += v[i];
        xsum -= v[j++];
        count++;
        ans = max(ans, sum - xsum);
        if (count == k)
            break;
    }
    ll idx = count;
    if (count < k)
    {
        for (int i = idx; i < n; i++)
        {
            xsum -= v[i];
            ans = max(ans, -xsum);
            count++;
            if (count == k)
                break;
        }
    }
    if (k == n)
        ans = max(ans, (long long int)0);
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
