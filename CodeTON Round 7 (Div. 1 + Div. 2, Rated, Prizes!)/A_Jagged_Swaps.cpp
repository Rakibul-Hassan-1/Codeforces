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
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    if (a[1] != 1)
    {
        no;
        return;
    }
    yes;
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
