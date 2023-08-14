#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define ll long long
#define nl endl
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define pii pair<int, int>
#define vector <int> vi
#define all_occarance (ctrl + shift + a)
#define f1(n) for (int i = 0; i < n; i++)
#define f2(a, n) for (int i = a; i < n; i++)
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int freq[110] = {0};
    int t;
    cin >> t;
    int num = t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }
    }
    for (int i = 0; i < 110; i++)
    {
        if (freq[i] == num)
        {
            cout << i << " ";
        }
    }
}
