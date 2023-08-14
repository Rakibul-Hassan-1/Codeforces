#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    int mn = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        int k = a[i + 1] - a[i];
        if (k < mn)
            mn = k;
    }
    cout << mn << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}