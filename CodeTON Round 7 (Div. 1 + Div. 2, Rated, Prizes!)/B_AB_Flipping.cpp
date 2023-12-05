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
    string s;
    cin >> s;

    int count = 0;
    int res = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'B')
            count++;
        else
        {
            res += count;
            if (count)
            {
                s[i] = 'B';
                count = 0;
                i++;
            }
        }
    }
    cout << res << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
