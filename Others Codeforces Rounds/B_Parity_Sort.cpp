#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long arr[n], copy_arr[n];

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            copy_arr[i] = arr[i];
        }

        sort(copy_arr + 1, copy_arr + 1 + n);

        int flag = false;

        for (int i = 1; i <= n; i++)
        {
            if (arr[i] % 2 != copy_arr[i] % 2)
                flag = true;
        }

        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}