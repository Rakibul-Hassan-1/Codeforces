#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define nl endl
#define all_occarance (ctrl + shift + a)
#define pii pair<int, int>

using namespace std;

void solve()
{
    int n, d;
    string s;
    cin >> n >> d >> s;

    // Find the first position in s where we can insert d to get a larger number
    int pos = n;
    for (int i = 0; i < n; i++)
    {
        if (s[i] < char(d + '0'))
        {
            pos = i;
            break;
        }
    }

    // Insert d at the found position
    s.insert(pos, string(1, char(d + '0')));

    cout << s << endl;
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
