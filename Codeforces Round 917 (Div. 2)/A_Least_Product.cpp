#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        bool neg = 0, zero = 0;
        for (auto i : v)
        {
            if (i < 0)
                neg = !neg;

            else if (i > 0)
                continue;
            else
                zero = 1;
        }
        if (zero or neg)
            cout << 0 << endl;
        else
        {
            cout << 1 << endl;
            cout << "1 0" << endl;
        }
    }

    return 0;
}
