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
    ll n, res;
    cin >> n;
    ll sum = 0, oddCount = 0, evenCount = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        sum += x;
        if (x & 1)
            oddCount++;
        else
            evenCount++;
        res = oddCount / 3;
        if (evenCount == 0 and oddCount == 1)
            res = 0;
        else if (oddCount % 3 == 1)
            res = (oddCount + 2) / 3;
        cout << sum - res << " ";
    }
    cout << endl;
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
