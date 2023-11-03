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
    int n, q;
    cin >> n >> q;

    vector<ll> a(n), v(q);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < q; i++)
        cin >> v[i];

    vector<vector<int>> div_arr(31);
    vector<int> done(n);

    for (int x = 30; x >= 0; x--)
    {
        for (int i = 0; i < n; i++)
        {
            if (done[i] == 1)
                continue;

            // if a[i] divisible by 2^x
            // (1ll << x))
            int p = pow(2, x);

            if ((a[i] % p) == 0)
            {
                done[i] = 1;
                div_arr[x].pb(i);
            }
        }
    }

    for (auto e : v)
    {
        for (int x = e; x <= 30; x++)
        {
            for (auto i : div_arr[x])
            {
                div_arr[e - 1].pb(i);
                a[i] += (pow(2, (e - 1)));
            }
            div_arr[x].clear();
        }
    }

    for (auto e : a)
        cout << e << " ";
    cout << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
