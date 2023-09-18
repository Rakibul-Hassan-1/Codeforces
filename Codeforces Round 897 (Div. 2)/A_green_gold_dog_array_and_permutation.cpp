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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        vp.push_back({arr[i], i});
    }

    // sort(arr.begin(), arr.end());
    sort(vp.begin(), vp.end());
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[vp[i].second] = n - i;
    }

    for (int x : ans)
        cout << x << " ";

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
