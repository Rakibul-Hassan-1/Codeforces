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
    int count = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        // int x;
        // cin>>x;
        cin >> v[i];
    }
    int store = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
        {
            store = v[i];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if (store != v[i])
        {
            cout << i + 1 << endl;
            break;
        }
    }
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
