#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 1)
    {
        cout << "NO" << endl;
        return 0;
    }

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            a[i] = i + 1;
        }
        else
        {
            a[i] = -(i + 1);
        }
    }

    cout << "YES" << endl;

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;

    return 0;
}
