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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum = accumulate(arr.begin(), arr.end(), 0), rem = sum % 3;
    vector<int> remCnt(3, 0);

    for (auto val : arr)
        remCnt[val % 3]++;

    int m = 0;
    if (rem == 1)
    {
        if (remCnt[1] > 0)
            m = 1;

        else
            m = 2;
    }
    else if (rem == 2)
    {
        if (remCnt[2] > 0)
            m = 1;

        else
        {
            cout << 1 << endl;
            return;
        }
    }

    cout << m << endl;
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
