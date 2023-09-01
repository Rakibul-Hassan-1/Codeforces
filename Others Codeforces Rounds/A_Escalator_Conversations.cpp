#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, H;
        cin >> n >> m >> k >> H;
        vector<int> h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int diff = abs(H - h[i]);
            if (diff <= (m - 1) * k)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
