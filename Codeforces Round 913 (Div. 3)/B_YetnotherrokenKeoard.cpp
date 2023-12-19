#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; i++)

#define TestCase() \
    int tc;        \
    cin >> tc;     \
    while (tc--)
#define fasterIO()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
using namespace std;

vector<int> getDivisors(int n)
{
    vector<int> d;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            d.push_back(i);
            if (i != (n / i))
            {
                d.push_back(n / i);
            }
        }
    }
    return d;
}

void solve()
{
    string s;
    cin >> s;
    stack<int> st1, st2;

    unordered_map<ll, ll> m;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
        {
            m[i] = 1;
            if (!st2.empty())
            {
                int p = st2.top();
                st2.pop();
                m[p] = 1;
            }
        }
        else if (s[i] == 'b')
        {
            m[i] = 1;
            if (!st1.empty())
            {
                int p = st1.top();
                st1.pop();
                m[p] = 1;
            }
        }
        else
        {
            if (s[i] >= 'a' && s[i] <= 'z' && s[i] != 'b')
                st1.push(i);

            else if (s[i] >= 'A' && s[i] <= 'Z' && s[i] != 'B')
                st2.push(i);
        }
    }
    string ans;
    rep(i, 0, s.size())
    {
        if (m[i] != 1)
        {
            ans += s[i];
        }
    }
    cout << ans << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
