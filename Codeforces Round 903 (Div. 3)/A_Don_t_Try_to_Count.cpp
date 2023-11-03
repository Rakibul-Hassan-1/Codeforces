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
    int n, m;
    string a, b;
    cin >> n >> m >> a >> b;
    bool flag = 0;
    for (int i = 0; i < 8; i++)
    {
        if (a.find(b) != string ::npos)
        {
            flag = true;
            cout << i << endl;
            break;
        }
        a += a;
    }
    if (!flag)
        cout << -1 << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
