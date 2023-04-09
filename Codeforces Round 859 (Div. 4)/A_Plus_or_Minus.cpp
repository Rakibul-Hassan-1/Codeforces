#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define all_occarance (ctrl + shift + a)
#define pii pair<int, int>

using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int c1 = a + b;
    int c2 = a - b;
    if (c1 == c)
    {
        cout << "+"
             << "\n";
    }
    else
    {
        cout << "-"
             << "\n";
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
