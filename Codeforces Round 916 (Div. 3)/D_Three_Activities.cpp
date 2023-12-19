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

void check(int n, vector<pair<int, int>> &a1, vector<pair<int, int>> &a2, vector<pair<int, int>> &a3)
{
    sort(a1.rbegin(), a1.rend());
    sort(a2.rbegin(), a2.rend());
    sort(a3.rbegin(), a3.rend());
    int ans = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (a1[i].second != a2[j].second and a1[i].second != a3[k].second and a2[j].second != a3[k].second)
                {
                    ans = max(ans, a1[i].first + a2[j].first + a3[k].first);
                }
            }
        }
    }
    cout << ans << endl;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a1(n), a2(n), a3(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i].first;
        a1[i].second = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a2[i].first;
        a2[i].second = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a3[i].first;
        a3[i].second = i + 1;
    }
    check(n, a1, a2, a3);
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
