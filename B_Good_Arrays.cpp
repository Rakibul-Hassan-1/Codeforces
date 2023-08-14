#include <bits/stdc++.h>
#define R_H Rakibul Hassan
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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    vector<int> v2 = v;
    sort(v2.begin(), v2.end());

    int sumV = 0, sumV2 = 0;
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == v2[i])
        {
            flag = true;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        sumV += v[i];
        sumV2 += v2[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (sumV == sumV2)
        {
            if (flag == false)
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }
    }
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
