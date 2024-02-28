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

string solve()
{
    int n;
    cin >> n;
    string result = "zzz";

    for (char a = 'a'; a <= 'z'; a++)
    {
        for (char b = 'a'; b <= 'z'; b++)
        {
            for (char c = 'a'; c <= 'z'; c++)
            {
                ll sum = (a - 'a' + 1) + (b - 'a' + 1) + (c - 'a' + 1);
                if (sum == n)
                {
                    string curr = {a, b, c};
                    if (curr < result)
                        result = curr;
                    }
            }
        }
    }
    cout << result << endl;
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
