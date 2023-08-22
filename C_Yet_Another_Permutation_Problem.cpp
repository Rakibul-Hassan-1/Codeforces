#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define ll long long
#define pii pair<int, int>
#define all_occarance (ctrl + shift + a)
#define f1(n) for (int i = 0; i < n; i++)
#define f2(a, n) for (int i = a; i < n; i++)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i += 2)
    {
        for (int j = i; j <= n; j *= 2)
            cout << j << " ";
    }
    cout << endl;
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
