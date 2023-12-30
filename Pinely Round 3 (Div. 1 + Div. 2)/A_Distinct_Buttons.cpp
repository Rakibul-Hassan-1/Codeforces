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

vector<int> getDivisors(int n)
{
    vector<int> d;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            d.push_back(i);
            if (i != (n / i))
            {
                d.push_back(n / i);
            }
        }
    }
    return d;
}

void solve()
{
    int n;
    cin >> n;
    bool px = 0, ny = 0, py = 0, nx = 0;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (x > 0)
            px = 1;
        if (x < 0)
            nx = 1;
        if (y > 0)
            py = 1;
        if (y < 0)
            ny = 1;
    }
    if (px and nx and py and ny)
        no;
    else
        yes;
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
