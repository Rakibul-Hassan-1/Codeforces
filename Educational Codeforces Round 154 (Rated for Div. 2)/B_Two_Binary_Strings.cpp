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

    string a, b;
    cin >> a >> b;
    int n = a.size() - 1;
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        f |= (b[i] == '0' && a[i] == b[i] && a[i + 1] == b[i + 1] && a[i + 1] == '1');
    }
    if (f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
