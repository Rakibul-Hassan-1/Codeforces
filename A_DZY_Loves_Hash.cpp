#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c[300], x;
    cin >> a >> b;
    for (int i = 1; i <= b; i++)
    {
        cin >> x;
        if (c[x % a])
        {
            cout << i;
            return 0;
        }
        c[x % a] = 1;
    }
    cout << -1;
    return 0;
}