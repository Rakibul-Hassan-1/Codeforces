#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define TestCase() \
    int tc;        \
    cin >> tc;     \
    while (tc--)
#define fasterIO()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
using namespace std;

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
    vector<int> v(n), ans;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    while (v[0] != v.back())
    {
        int x = 0;
        if (v[0] % 2 == 0 && v.back() % 2 == 0)
        {
            x = 0;
            ans.push_back(0);
        }
        else if (v[0] % 2 == 0 && v.back() % 2 == 1)
        {
            x = 0;
            ans.push_back(0);
        }
        else if (v[0] % 2 == 1 && v.back() % 2 == 0)
        {
            x = 1;
            ans.push_back(1);
        }
        else if (v[0] % 2 == 1 && v.back() % 2 == 1)
        {
            x = 0;
            ans.push_back(0);
        }
        v[0] = (v[0] + x) / 2;
        v.back() = (v.back() + x) / 2;
    }

    cout << ans.size() << endl;
    if (ans.size() <= n)
    {
        for (auto i : ans)
            cout << i << " ";
        cout << endl;
    }
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
