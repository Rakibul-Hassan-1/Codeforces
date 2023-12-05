#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define TestCase() \
    int tc;        \
    cin >> tc;     \
    while (tc--)
#define fasterIO()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    bool ans = false;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            ans = true;
        }
    }
    if (ans)
        yes;
    else
        no;
}

int main()
{
    fasterIO();
    TestCase()
    {
        solve();
    }
    return 0;
}
