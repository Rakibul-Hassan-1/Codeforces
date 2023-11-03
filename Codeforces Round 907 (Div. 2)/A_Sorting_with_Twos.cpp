#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define ff first
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ss second
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

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    bool flag = false;
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] > v[i])
        {
            if (i != 1 and i != 2 and i != 4 and i != 8 and i != 16)
            {
                flag = true;
            }
        }
    }
    if (flag)
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
