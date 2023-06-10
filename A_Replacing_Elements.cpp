#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define ll long long
#define nl endl
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define pii pair<int, int>
#define vi vector<int>
#define all_occarance (ctrl + shift + a)
#define f1(n) for (int i = 0; i < n; i++)
#define f2(a, n) for (int i = a; i < n; i++)

using namespace std;

void solve()
{
    int n, d;
    cin >> n >> d;
    vi arr(n);
    f1(n)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int first_sum = arr[0] + arr[1];
    if (arr[n - 1] <= d)
        cout << "YES" << endl;
    else if (first_sum <= d)
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
