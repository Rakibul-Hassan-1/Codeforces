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
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;

    bool flag = false;
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == b[i + 1])
        {
            flag = true;
            break;
        }
    }
    string ans;

    if (flag == false)
    {
        for (int i = 1; i < a.size(); i++)
        {
            // ans = a;
            if (a[i] == a[i - 1])
            {
                ans = a[i - 1];
                ans.append(b);
            }
            else
            {
            }
        }
    }
    else
    {
        no;
    }

    cout << ans << endl;
    // for (auto x : ans)
    //     cout << x << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
