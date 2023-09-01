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
    string s;
    cin >> s;
    int count = 0;
    // set<char> st;
    int mx = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
            count = 0;
        else
        {
            count++;
            mx = max(mx, count);
        }
    }
    cout << mx + 1;

    // for (auto x : st)
    // {
    //     cout << x << " ";
    // }
    // cout << count << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
