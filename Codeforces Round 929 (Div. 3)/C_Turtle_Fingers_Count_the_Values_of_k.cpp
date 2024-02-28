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

int maxPower(int val, int num)
{
    int power = 0;
    while (val % num == 0)
    {
        val /= num;
        power++;
    }
    return power;
}

void solve()
{
    int a, b, l;
    cin >> a >> b >> l;
    int maxPowA = maxPower(l, a), maxPowB = maxPower(l, b);
    set<int> st;
    for (int x = 0; x <= maxPowA; x++)
    {
        for (int y = 0; y <= maxPowB; y++)
        {
            ll powA = 1, powB = 1;
            for (int i = 0; i < x; i++)
                powA *= a;
            for (int j = 0; j < y; j++)
                powB *= b;

            ll temp = powA * powB;
            if (l % temp == 0)
                st.insert(l / temp);
        }
    }

    cout << st.size() << endl;
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
