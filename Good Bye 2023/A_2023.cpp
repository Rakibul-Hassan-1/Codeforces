#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
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
    ll n, k;
    cin >> n >> k;
    ll p = 1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        p *= x;
    }
    double r = 2023 / p;
    if (r * p != 2023)
        no;
    else
    {
        yes;
        cout << r;
        if (k > 0)
            cout << " ";
        for (int i = 1; i < k; i++)
            cout << 1 << " ";
        cout << endl;
    }
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
