//....................................<In the name of Allah>...............................//

//.................................<Bismillahir Rahmanir Rahim>...................................//
// Author : Rakibul Hassan

#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned ll
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl '\n'
const ll mod = 1e9 + 7;
#define gcd(aaa, aaaa) __gcd((aaa), (aaaa));
#define lcm(aaa, aaaa) (abs((aaa) * (aaaa)) / gcd(aaa, aaaa))
#define TestCase() \
    int tc;        \
    cin >> tc;     \
    while (tc--)
#define fasterIO()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
using namespace std;

int main()
{
    fasterIO();

    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end(), [&](string x, string y)
         { return x.size() < y.size(); });

    bool flag = true;

    for (int i = 0; i < n - 1; i++)
    {
        string s = a[i + 1];
        int pos = s.find(a[i]);
        if (pos == -1)
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
        for (auto x : a)
        {
            cout << x << endl;
        }
    }
    else
        cout << "NO" << endl;

    return 0;
}
