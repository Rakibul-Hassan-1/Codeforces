#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> v;

        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[j] % v[i] == 0)
                {
                    continue;
                }

                else
                {
                    a.push_back(v[i]);
                    b.push_back(v[j]);
                }
            }
        }
        for (int x : a)
        {
            cout << x << " ";
        }
        cout << endl;
        for (int x : b)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
