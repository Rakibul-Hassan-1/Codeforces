//....................................<In the name of Allah>...............................//

//.................................<Bismillahir Rahmanir Rahim>...................................//
// Author : Rakibul Hassan

#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define pii pair<int, int>
#define MOD = 1e9;
using namespace std;
void solve()
{
    int n, a, q;
    string s;
    cin >> n >> a >> q >> s;
    int c = a, d = 0;
    int cnt = 0;
    int mx = a;
    for (int i = 0; i < q; i++)
    {
        if (s[i] == '+')
        {
            cnt++;
            c++;
        }
        else
        {
            c--;
        }
        mx = (max(mx, c));
    }
    if (mx == n)
    {
        cout << "YES";
    }
    else
    {
        if (a + cnt >= n)
        {
            cout << "MAYBE";
        }
        else
        {
            cout << "NO";
        }
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
