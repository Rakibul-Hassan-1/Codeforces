#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define ll long long
#define nl endl
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define pii pair<int, int>
#define all_occarance (ctrl + shift + a)
#define f1(n) for (int i = 0; i < n; i++)
#define f2(a, n) for (int i = a; i < n; i++)

using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long a, b;
    long long i, m = 0;
    cin >> a;
    for (i = 1; i < n; i++)
    {
        cin >> b;
        m = max(a * b, m); // 8
        a = b;
    }
    cout << m << endl;
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
