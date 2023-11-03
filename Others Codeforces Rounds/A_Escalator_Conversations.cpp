//....................................<In the name of Allah>...............................//

//.................................<Bismillahir Rahmanir Rahim>...................................//
// Author : Rakibul Hassan

#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned ll
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl '\n'
#define gcd(aaa, aaaa) __gcd((aaa), (aaaa));
#define lcm(aaa, aaaa) (abs((aaa) * (aaaa)) / gcd(aaa, aaaa))
#define TestCase() \
    int tc;        \
    cin >> tc;     \
    while (tc--)
#define fasterIO()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)

using namespace std;

void solve()
{
    int n, m, k, h;
    cin >> n >> m >> k >> h;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if ((h != x) && abs(h - x) % k == 0 && abs(h - x) <= (m - 1) * k)
            ans++;

    }
    cout << ans << endl;
}
int main()
{
    fasterIO();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
