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
    vector<int> ans;
    int i = 1;
    while (i * i <= n)
    {
        // cout << i * i << " ";
        ans.push_back(i * i);
        i++;
    }
    i = 1;
    while (i * i * i <= n)
    {
        // cout << i * i << " ";
        ans.push_back(i * i * i);
        i++;
    }
    sort(ans.begin(), ans.end());

    auto x = unique(ans.begin(), ans.end());
    ans.erase(x, ans.end());

    cout << ans.size() << endl;
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
