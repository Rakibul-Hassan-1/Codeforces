//....................................<In the name of Allah>...............................//

//.................................<Bismillahir Rahmanir Rahim>...................................//
// Author : Rakibul Hassan

#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define pii pair<int, int>
#define MOD = 1e9;
using namespace std;

ll sumN(long long n)
{
    return  (n * (n + 1)) / 2;
}

void solve()
{
    long long n, k;
    long long x;
    cin >> n >> k >> x;

    long long minSum = sumN(k);
    long long maxSum = sumN(n) - sumN(n - k);

    if (x >= minSum && x <= maxSum)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
