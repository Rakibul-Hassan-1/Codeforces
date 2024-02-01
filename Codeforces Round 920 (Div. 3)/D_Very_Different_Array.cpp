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
    int n, m;
    cin >> n >> m;
    deque<int> arr(n), brr(m);
    for (auto &i : arr)
        cin >> i;
    for (auto &i : brr)
        cin >> i;

    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end(), greater<>());
    vector<int> ans;
    while (ans.size() < n)
    {
        if (abs(brr.back() - arr.back()) > abs(brr.front() - arr.front()))
        {
            ans.push_back(abs(brr.back() - arr.back()));
            brr.pop_back();
            arr.pop_back();
        }
        else
        {
            ans.push_back(abs(arr.front() - brr.front()));
            arr.pop_front();
            brr.pop_front();
        }
    }
    ll sum = accumulate(ans.begin(), ans.end(), 0ll);
    cout << sum << endl;
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
