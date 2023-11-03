#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define ff first
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
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
    sort(v.begin(), v.end());

    bool flag = false;
    int diff = v[n - 1] + v[0];
    // cout << diff << endl;

    if (v.size() == 2)
    {
        yes;
    }

    else
    {
        for (int i = 1; i < n - 1; i++)
        {
            // cout << (v[n - 1] + v[i]) << " ";
            int prev = (v[n - 1] + v[i]);
            // cout << prev << " ";
            if (prev != diff)
            {
                flag = true;
            }
        }

        if (flag)
            no;
        else
            yes;
    }
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
