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
    vector<string> v;
    map<string, int> mp;
    int n;
    cin >> n;
    int h = n;
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < n; j++)
        {
            string s;
            cin >> s;
            v.push_back(s);
            mp[s]++;
        }
    }
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (mp[v[i]] == 1)
        {
            sum += 3;
        }
        else if (mp[v[i]] == 2)
        {
            sum += 1;
        }

        if (i == n - 1)
        {
            cout << sum << " ";
            sum = 0;
            n = n + h;
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
