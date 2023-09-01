#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define ll long long
#define nl endl
#define pii pair<int, int>
#define all_occarance (ctrl + shift + a)
#define f1(n) for (int i = 0; i < n; i++)
#define f2(a, n) for (int i = a; i < n; i++)
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, m;
        cin >> n >> m;
        long long sum = 0;

        priority_queue<int, vector<int>, greater<int>> pq;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            pq.push(a);
        }

        for (int i = 0; i < m; i++)
        {

            int a;
            cin >> a;
            pq.pop();
            pq.push(a);
        }

        while (!pq.empty())
        {
            sum += pq.top();
            pq.pop();
        }

        cout << sum << endl;
    }
}
