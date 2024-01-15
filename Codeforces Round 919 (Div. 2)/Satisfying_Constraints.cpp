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
    int minValue = INT_MIN;
    int maxValue = INT_MAX;
    set<int> st;

    for (int i = 0; i < n; i++)
    {
        int a, x;
        cin >> a >> x;
        if (a == 1)
            minValue = max(minValue, x);
        else if (a == 2)
        {
            maxValue = min(maxValue, x);
        }
        else if (a == 3)
        {
            st.insert(x);
        }
    }

    if (minValue > maxValue)
    {
        cout << 0 << endl;
        return;
    }

    int count = maxValue - minValue + 1;
    for (auto num : st)
    {
        if (num >= minValue && num <= maxValue)
            count--;
    }

    cout << count << endl;
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
