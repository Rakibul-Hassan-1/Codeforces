#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define ll long long
#define nl endl
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define pii pair<int, int>
#define all_occarance (ctrl + shift + arr)
#define f1(n) for (int i = 0; i < n; i++)
#define f2(arr, n) for (int i = arr; i < n; i++)

using namespace std;

void solve()
{
    vector<vector<char>> arr(3, vector<char>(3));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];
    }
    if (arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2] && arr[0][0] != '.')
        cout << arr[0][0] << "\n";
    else if (arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] && arr[1][0] != '.')
        cout << arr[1][0] << "\n";
    else if (arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2] && arr[2][0] != '.')
        cout << arr[2][0] << "\n";
    else if (arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0] && arr[0][0] != '.')
        cout << arr[0][0] << "\n";
    else if (arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1] && arr[0][1] != '.')
        cout << arr[0][1] << "\n";
    else if (arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2] && arr[0][2] != '.')
        cout << arr[0][2] << "\n";
    else if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != '.')
        cout << arr[0][0] << "\n";
    else if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] != '.')
        cout << arr[0][2] << "\n";
    else
        cout << "DRAW"
             << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
