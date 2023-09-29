// #include <bits/stdc++.h>
// #define Author Rakibul Hassan
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
//     vector<long long int> a(n), b(n);

//     for (int i = 0; i < a.size(); i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < b.size(); i++)
//     {
//         cin >> b[i];
//     }

//     ll int x = (*min_element(a.begin(), a.end())) * n +
//                accumulate(b.begin(), b.end(), 0ll);

//     ll int y = (*min_element(b.begin(), b.end())) * n +
//                accumulate(a.begin(), a.end(), 0ll);
//     cout << min(x, y) << endl;
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
#define Author Rakibul Hassan
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
    vector<long long int> a(n), b(n);

    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;

    ll int x = (*min_element(a.begin(), a.end())) * n +
               accumulate(b.begin(), b.end(), 0ll);

    ll int y = (*min_element(b.begin(), b.end())) * n +
               accumulate(a.begin(), a.end(), 0ll);
    cout << min(x, y) << endl;
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
