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
    string s;
    cin >> s;
    vector<char> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            char q = s[i];
            if (q == s[j])
            {
                v.push_back(q);
                i = j + 1;
                j = i;
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout << nl;
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
