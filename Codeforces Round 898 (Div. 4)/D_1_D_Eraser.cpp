#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define ll long long
#define nl endl
#define pii pair<int, int>
#define all_occarance (ctrl + shift + a)
#define f1(n) for (int i = 0; i < n; i++)
#define f2(a, n) for (int i = a; i < n; i++)
using namespace std;
void solve()
{

    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    int count = -1;
    int op = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
        {
            if (count >= i)
                continue;

            op++;
            count = max(count, i + m - 1);
        }
    }
    cout << op << endl;
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
