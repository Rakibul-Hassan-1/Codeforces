#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
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
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }
    cout << "196" << string(n - 3, '0') << endl;
    for (int i = 0; i < n / 2; i++)
    {
        cout << "1" << string(i, '0') << "6" << string(i, '0') << "9" << string(n - 3 - 2 * i, '0') << endl;
        cout << "9" << string(i, '0') << "6" << string(i, '0') << "1" << string(n - 3 - 2 * i, '0') << endl;
    }
}
int main()
{
    fasterIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
