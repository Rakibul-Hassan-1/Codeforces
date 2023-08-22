#include <bits/stdc++.h>
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

    sort(v.begin(), v.end());
    if (v.back() == v[0])
    {
        cout << "-1\n";
        return;
    }

    else
    {
        int it = 0;

        while (v[it] == v[0])
        {
            it++;
        }

        cout << it << " " << n - it << "\n";

        for (int j = 0; j < it; ++j)
        {
            cout << v[j] << " ";
        }

        for (int j = it; j < n; ++j)
        {
            cout << v[j] << " ";
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}