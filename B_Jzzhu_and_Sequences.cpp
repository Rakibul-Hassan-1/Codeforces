#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define ll long long
#define nl endl
#define pii pair<int, int>
#define all_occarance (ctrl + shift + a)
#define f1(n) for (int i = 0; i < n; i++)
#define f2(a, n) for (int i = a; i < n; i++)
const int mod = 1e9 + 7;
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x, y, n;
    cin >> x >> y >> n;
    int pos_z = y - x;
    int neg_z = x - y;

    int arr[] = {x, y, pos_z, -x, -y, neg_z};

    if ((arr[(n - 1) % 6] % mod < 0))
    {
        int ans = (arr[(n - 1) % 6] % mod + mod);
        cout << ans << endl;
    }
    else
    {
        cout << (arr[(n - 1) % 6] % mod + mod) % mod;
    }
}
