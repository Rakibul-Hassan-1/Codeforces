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
    string s;
    cin >> s;

    int count[4] = {0};

    for (char c : s)
    {
        if (c == '1')
            count[1]++;
        else if (c == '2')
            count[2]++;
        else if (c == '3')
            count[3]++;
    }

    string result;
    for (int i = 1; i <= 3; i++)
    {
        while (count[i]--)
        {
            result += to_string(i);
            if (result.length() < s.length())
            {
                result += '+';
            }
        }
    }

    cout << result << endl;
}
int main()
{
    fasterIO();
    int tc = 1;
    // cin >> tc;
    while (tc--)
        solve();

    return 0;
}
