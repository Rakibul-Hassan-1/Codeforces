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
    for (int j = 1; j * j <= n; j++)
    {
        if (n % j == 0)
        {
            d.push_back(j);
            if (j != (n / j))
            {
                d.push_back(n / j);
            }
        }
    }
    return d;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n + 1);
    for (int j = 1; j <= n; j++)
        cin >> v[j];
    unordered_map<ll, ll> diff;
    ll evenSum = 0, oddSum = 0;
    string ans = "NO";
    for (ll j = 1; j <= n; j++)
    {
        if (j % 2 != 0)
            oddSum += v[j];
        else
            evenSum += v[j];

        ll currDiff = oddSum - evenSum;
        if (currDiff == 0 or diff.find(currDiff) != diff.end())
        {
            ans = "YES";
            break;
        }
        diff[currDiff] = j;
    }
    cout << ans << endl;
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
