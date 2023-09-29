//....................................<In the name of Allah>...............................//

//.................................<Bismillahir Rahmanir Rahim>...................................//
// Author : Rakibul Hassan

#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define pii pair<int, int>
#define MOD = 1e9;
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    int mx = -1;
    int freq[1001] = {0};
    set<int> st;
    for (int i = 0; i < t; i++)
    {
        int a;
        cin >> a;
        st.insert(a);
        freq[a]++;
        mx = max(mx, freq[a]);
    }
    cout << mx << " " << st.size() << endl;
}
