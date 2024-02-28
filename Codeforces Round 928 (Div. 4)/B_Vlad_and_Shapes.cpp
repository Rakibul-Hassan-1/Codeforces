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

string ans(vector<string> &arr, int n)
{
    bool isS = true, isT = true;
    int agerCount = -1, agerPos = -1, totcnt = 0;

    for (int i = 0; i < n; i++)
    {
        int cnt = 0, startPos = -1;
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == '1')
            {
                cnt++;
                if (startPos == -1)
                    startPos = j;
            }
        }

        if (cnt > 0)
        {
            if (agerCount != -1 && (cnt != agerCount || startPos != agerPos))
                isS = false;
            if (agerCount != -1 && abs(cnt - agerCount) != 2)
                isT = false;
            agerCount = cnt;
            agerPos = startPos;
            totcnt++;
        }
    }

    if (totcnt <= 1)
        isT = false;

    if (isS)
        return "SQUARE";
    if (isT)
        return "TRIANGLE";
    return "UNKNOWN";
}

void solve()
{
    int n;
    cin >> n;
    vector<string> arr(n);

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << ans(arr, n) << endl;
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
