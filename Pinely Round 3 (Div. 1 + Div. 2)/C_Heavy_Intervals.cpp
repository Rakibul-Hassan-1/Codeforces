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
    vector<int> l(n);
    vector<int> r(n);
    vector<int> c(n);
    vector<int> interval;

    for (int i = 0; i < n; i++)
        cin >> l[i];
    for (int i = 0; i < n; i++)
        cin >> r[i];
    for (int i = 0; i < n; i++)
        cin >> c[i];
    sort(l.begin(), l.end());
    sort(r.begin(), r.end());
    // sort in reverse
    sort(c.rbegin(), c.rend());
    set<int> st(l.begin(), l.end());
    for (int i = 0; i < n; i++)
    {
        auto it = st.lower_bound(r[i]);
        it--;
        interval.push_back(r[i] - (*it));
        st.erase(it);
    }
    sort(interval.begin(), interval.end());
    ll ans = 0;
    for (int i = 0; i < n; i++)
        ans += interval[i] * 1LL * c[i];
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
