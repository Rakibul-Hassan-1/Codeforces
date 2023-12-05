// #include <bits/stdc++.h>
// #define ll long long
// #define yes cout << "YES" << endl
// #define no cout << "NO" << endl
// #define endl '\n'
// #define TestCase() \
//     int tc;        \
//     cin >> tc;     \
//     while (tc--)
// #define fasterIO()                 \
//     ios_base ::sync_with_stdio(0); \
//     cin.tie(0);                    \
//     cout.tie(0)
// using namespace std;

// void solve()
// {
//     int a, b, c;
//     cin >> a >> b >> c;
//     if (abs(b - c) % 2 == 0)
//     {
//         cout << 1 << " ";
//     }
//     else
//     {
//         cout << 0 << " ";
//     }
//     if ((abs(a - c)) % 2 == 0)
//     {
//         cout << 1 << " ";
//     }
//     else
//     {
//         cout << 0 << " ";
//     }
//     if ((abs(a - b)) % 2 == 0)
//     {
//         cout << 1 << endl;
//     }
//     else
//     {
//         cout << 0 << endl;
//     }
// }
// int main()
// {
//     fasterIO();
//     TestCase()
//         solve();
//     return 0;
// }

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

int fun(int a, int b, int c)
{
    return b % 2 == c % 2;
}
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << fun(a, b, c) << " " << fun(b, a, c) << " " << fun(c, a, b) << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
