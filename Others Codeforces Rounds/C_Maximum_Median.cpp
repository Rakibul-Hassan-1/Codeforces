
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    
    ll ans = v[n / 2];
    ll cnt = 1;
    for (int i = n / 2 + 1; i < n; i++)
    {
        ll g = v[i] - v[i - 1];
        ll need = g * cnt;
        if (k == 0)
            break;
        if (need <= k)
        {
            ans += need / cnt;
            k -= need;
        }
        else
        {
            ans += k / cnt;
            k = 0;
        }
        cnt++;
    }
    ans += k / cnt;
    cout << ans << endl;

    return 0;
}
