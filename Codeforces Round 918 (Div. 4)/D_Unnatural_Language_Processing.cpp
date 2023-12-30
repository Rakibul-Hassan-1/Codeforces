#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans;

    for (int i = n - 1; i >= 0; i--)
    {
        if ((s[i] == 'b' or s[i] == 'c' or s[i] == 'd') and (i - 1 >= 0) and (s[i - 1] == 'a' or s[i - 1] == 'e') and (i - 2 >= 0) and (s[i - 2] == 'b' or s[i - 2] == 'c' or s[i - 2] == 'd') and i - 2 > 0)
        {
            ans += s[i];
            ans += s[i - 1];
            ans += s[i - 2];
            ans += '.';
            i -= 2;
        }
        else if ((s[i] == 'b' or s[i] == 'c' or s[i] == 'd') and (i - 1 >= 0) and (s[i - 1] == 'a' or s[i - 1] == 'e') and (i - 2 >= 0) and (s[i - 2] == 'b' or s[i - 2] == 'c' or s[i - 2] == 'd') and i - 2 == 0)
        {
            ans += s[i];
            ans += s[i - 1];
            ans += s[i - 2];

            i -= 2;
        }
        else if ((s[i] == 'a' or s[i] == 'e') and (i - 1 >= 0) and (s[i - 1] == 'b' or s[i - 1] == 'c' or s[i - 1] == 'd') and i - 1 > 0)
        {
            ans += s[i];
            ans += s[i - 1];
            ans += '.';
            i--;
        }
        else if ((s[i] == 'a' or s[i] == 'e') and (i - 1 >= 0) and (s[i - 1] == 'b' or s[i - 1] == 'c' or s[i - 1] == 'd') and i - 1 == 0)
        {
            ans += s[i];
            ans += s[i - 1];
            i--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}
int main()
{
    fasterIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
