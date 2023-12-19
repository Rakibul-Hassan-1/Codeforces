#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
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

void solve(string ab)
{
    for (int i = 1; i < ab.size(); ++i)
    {
        string a_str = ab.substr(0, i);
        string b_str = ab.substr(i);

        if (a_str[0] == '0' || b_str[0] == '0')
            continue;

        int a = stoi(a_str);
        int b = stoi(b_str);

        // Check if b > a
        if (b > a)
        {
            cout << a << " " << b << endl;
            return;
        }
    }
    cout << "-1" << endl;
}

int main()
{
    fasterIO();
    int t;
    cin >> t;
    while (t--)
    {
        string ab;
        cin >> ab;
        solve(ab);
    }
    return 0;
}
