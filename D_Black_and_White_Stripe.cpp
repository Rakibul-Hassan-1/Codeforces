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

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < k; i++)
    {
        if (s[i] == 'W')
        {
            c++;
        }
    }
    // cout << c << endl;
    int ans = c;

    for (int i = k; i < n; i++)
    {
        if (s[i] == 'W')
            c++;
        if (s[i - k] == 'W')
            c--;
        ans = min(ans, c);
    }

    cout << ans << endl;
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
