#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<ll> ar(n);
    ll mini = 1000000000;

    cin >> ar[0];
    for (int i = 1; i < n; i++)
    {
        cin >> ar[i];

        mini = min(mini, ar[i] - ar[i - 1]);
    }

    if (mini < 0)
    {
        cout << "0\n";
        return;
    }

    cout << int(mini / 2) + 1 << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
