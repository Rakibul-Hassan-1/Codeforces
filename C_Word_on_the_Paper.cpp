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
    int N = 8;
    vector<string> s(N);
    vector<char> ans; 

    for (int i = 0; i < N; i++)
    {
        string word;
        cin >> word;
        s[i] = word;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < s[i].size(); j++)
        {
            char c = s[i][j];
            if (c >= 'a' && c <= 'z')
            {
                ans.push_back(c);
            }
        }
    }

    for (char c : ans)
    {
        cout << c;
    }
    cout << endl;
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
