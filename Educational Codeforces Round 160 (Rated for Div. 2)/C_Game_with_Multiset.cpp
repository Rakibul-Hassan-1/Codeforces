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
void solve()
{
    vector<int> frq(32, 0);
    int q;
    cin >> q;
    while (q > 0)
    {
        int qT;
        cin >> qT;
        if (qT == 1)
        {
            int x;
            cin >> x;
            frq[x]++;
        }
        else
        {
            int bit_mp;
            cin >> bit_mp;
            vector<int> temp = frq;
            bool check = true;
            int bit = 0;
            while (bit < 30)
            {
                if ((bit_mp >> bit) & 1)
                {
                    if (temp[bit])
                        temp[bit]--;
                    else
                        check = false;
                }
                temp[bit + 1] += temp[bit] / 2;
                bit++;
            }
            if (check)
                yes;
            else
                no;
        }
        q--;
    }
}

int main()
{
    fasterIO();
    // TestCase()
    //     solve();
    int t = 1;
    int ct = 1;
    while (ct <= t)
    {
        solve();
        ct++;
    }

    return 0;
}
