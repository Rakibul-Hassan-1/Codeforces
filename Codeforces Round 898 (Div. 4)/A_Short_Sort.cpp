#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string a, b, c;
        a = s;
        b = s;
        c = s;
        swap(a[0], a[1]);
        swap(b[1], b[2]);
        swap(c[0], c[2]);
        if (s == "abc" || a == "abc" || b == "abc" || c == "abc")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}