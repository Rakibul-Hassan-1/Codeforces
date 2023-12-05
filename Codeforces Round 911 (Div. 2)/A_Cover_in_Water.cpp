#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
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
    int n;
    string s;
    cin >> n >> s;
    int ans = 0, count = 0, total = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.' && count == 1)
        {
            ans++;
            total++;
        }
        if (total >= 3)
        {
            ans = 2;
            break;
        }
        if (s[i] == '.' && count == 0)
        {
            count = 1;
            ans++;
            total++;
        }
        if (s[i] == '#' && count == 1)
        {
            total = 0;
            count = 0;
        }
    }
    cout << ans << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
