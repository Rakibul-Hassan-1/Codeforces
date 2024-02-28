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
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll minn = *min_element(arr.begin(), arr.end());
    int minimum_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == minn)
            minimum_count++;
    }

    if (minimum_count == n)
    {
        no;
        return;
    }
    if (minimum_count == 1)
    {
        yes;
        return;
    }
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != minn)
        {
            if (arr[i] % minn != 0)
            {
                flag = false;
                break;
            }
        }
    }
    if (flag)
        no;
    else
        yes;
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
