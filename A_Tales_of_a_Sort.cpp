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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            flag = true;
        }
    }

    if (flag == false)
    {
        cout << "0" << endl;
    }

    else
    {
        vector<int> v;
        int k = 0;

        while (n--)
        {

            int x = max(0, arr[k] - 1);
            v.push_back(x);

            k++;
        }

        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << endl;
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
