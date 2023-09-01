#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define ll long long
#define nl endl
#define pii pair<int, int>
#define all_occarance (ctrl + shift + a)
#define f1(n) for (int i = 0; i < n; i++)
#define f2(a, n) for (int i = a; i < n; i++)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    while (n > 1)
    {
        if (n % 2 == 0)
        {
            cout << -1 << "\n";
            return;
        }

        n = n / 2;

        if (n % 2 == 0)
        {
            n++;
            v.push_back(1);
        }
        else
        {
            v.push_back(2);
        }
    }
    cout << v.size() << "\n";
    reverse(v.begin(), v.end());

    for (int x : v)
    {
        cout << x << " ";
    }
    cout << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
