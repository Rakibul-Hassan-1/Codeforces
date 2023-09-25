// #include <bits/stdc++.h>
// #define R_H Rakibul Hassan
// #define ll long long
// #define nl endl
// #define pii pair<int, int>
// #define all_occarance (ctrl + shift + a)
// #define f1(n) for (int i = 0; i < n; i++)
// #define f2(a, n) for (int i = a; i < n; i++)
// using namespace std;
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<pii> se(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> se.front().first >> se.front().second;
//     }
//     int mmax = 0;
//     for (int i = 1; i < n; i++)
//     {
//         if (se[i].first >= se[0].first)
//         {
//             mmax = max(mmax, se[i].second);
//         }
//     }
//     if (se[0].second > mmax)
//         cout << se[0].first << endl;
//     else
//         cout << "-1" << endl;
// }

// signed main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }

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
    int n;
    cin >> n;
    vector<int> s(n), e(n), s1, e1;
    int a, b, flag = 0;
    cin >> a >> b;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> s[i];
        cin >> e[i];

        if (s[i] >= a)
        {
            if (e[i] >= b)
                flag = 1;
        }
    }

    if (flag)
        cout << "-1\n";
    else
        cout << a << endl;
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
