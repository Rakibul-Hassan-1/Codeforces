#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define nl endl
#define all_occarance (ctrl + shift + a)
#define pii pair<int, int>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> b(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
    }

    vector<int> a(n);
    a[0] = b[0]; // first element of a is the same as the first element of b
    for (int i = 1; i < n - 1; i++)
    {
        // for each element in b, choose the smaller of the two adjacent elements in a
        // unless that element is already determined by a previous comparison
        if (b[i] < a[i - 1])
        {
            a[i] = b[i];
        }
        else
        {
            a[i] = b[i - 1];
        }
    }
    a[n - 1] = b[n - 2]; // last element of a is the same as the last element of b

    // output the elements of a
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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
