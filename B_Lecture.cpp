#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n, m;
    cin >> n >> m;
    ll ans = 0, cnt = 0, res = 0;
    map<string, string> mp;
    string a, b;
    while (m--)
    {
        cin >> a >> b;
        if (a.size() <= b.size())
            mp[a] = a;
        else
            mp[a] = b;
    }
    while (n--)
    {
        cin >> a;
        cout << mp[a] << ' ';
    }
    return 0;
}