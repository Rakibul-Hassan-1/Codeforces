//....................................<In the name of Allah>...............................//

//.................................<Bismillahir Rahmanir Rahim>...................................//
// Author : Rakibul Hassan

#include <bits/stdc++.h>
#define int long long
#define nl endl
#define pii pair<int, int>
#define MOD 998244353
using namespace std;

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1) % MOD;
}

void solve()
{
    string str;
    cin >> str;
    int cunt = 1;
    int min_op = 0, diff = 1;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == str[i + 1])
        {
            cunt = (cunt + 1) % MOD;
        }
        else
        {
            min_op = (min_op + cunt - 1) % MOD;
            diff = (diff * cunt) % MOD;
            cunt = 1;
        }
    }
    cout << min_op % MOD << " ";
    cout << (diff * fact(min_op)) % MOD << endl;
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
