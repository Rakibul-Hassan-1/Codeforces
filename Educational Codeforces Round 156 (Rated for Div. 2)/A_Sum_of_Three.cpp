//....................................<In the name of Allah>...............................//

//.................................<Bismillahir Rahmanir Rahim>...................................//
// Author : Rakibul Hassan

#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define pii pair<int, int>
#define MOD = 1e9;
using namespace std;
void solve(int n)
{
    if (n % 3 == 0)
    {
        if (n > 9)
        {
            cout << "YES\n";
            cout << "1 4 " << n - 5 << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    else if (n % 3 == 1)
    {
        if (n > 6)
        {
            cout << "YES\n";
            cout << "1 2 " << n - 3 << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    else
    {
        if (n > 5)
        {
            cout << "YES\n";
            cout << "1 2 " << n - 3 << "\n";
        }
        else
        {
            cout << "NO\n";
        }
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
        int n;
        cin >> n;
        solve(n);
    }
}
