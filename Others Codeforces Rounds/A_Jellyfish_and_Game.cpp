//....................................<In the name of Allah>...............................//

//.................................<Bismillahir Rahmanir Rahim>...................................//
// Author : Rakibul Hassan

#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define pii pair<int, int>
#define MOD = 1e9;
const int N = 1005;
int n, m, k, a[N], b[N];
using namespace std;
void solve()
{
  
    cin >> n >> m >> k;
    k--;
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int min_a_index = 0, max_b_index = 0;
    for (int i = 1; i < n; i++)
        if (a[i] < a[min_a_index])
            min_a_index = i;
    for (int i = 1; i < m; i++)
        if (b[i] > b[max_b_index])
            max_b_index = i;

    if (b[max_b_index] > a[min_a_index])
        swap(a[min_a_index], b[max_b_index]);

    if (k & 1)
    {
        int max_a_index = 0, min_b_index = 0;
        for (int i = 1; i < n; i++)
            if (a[i] > a[max_a_index])
                max_a_index = i;
        for (int i = 1; i < m; i++)
            if (b[i] < b[min_b_index])
                min_b_index = i;
        swap(a[max_a_index], b[min_b_index]);
    }

    long long sum_a = 0;
    for (int i = 0; i < n; i++)
        sum_a += a[i];
    cout << sum_a << endl;
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
