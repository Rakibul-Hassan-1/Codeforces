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

int solve(int a, int b, int c)
{
    if (a == b)
    {
        return c;
    }
    else if (a == c)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int main()
{
    fasterIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int ans = solve(a, b, c);
        cout << ans << endl;
    }
}
