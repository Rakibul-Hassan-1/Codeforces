#include <bits/stdc++.h>
using namespace std;

vector<int> calculateLIS(const vector<int> &arr)
{
    vector<int> dp(arr.size(), 1), piles;
    for (int i = 0; i < arr.size(); ++i)
    {
        auto it = lower_bound(piles.begin(), piles.end(), arr[i]);
        if (it == piles.end())
            piles.push_back(arr[i]);
        else
            *it = arr[i];
        dp[i] = distance(piles.begin(), upper_bound(piles.begin(), piles.end(), arr[i]));
    }
    return dp;
}

int solve(const vector<int> &arr)
{
    vector<int> lis = calculateLIS(arr);
    vector<int> arrReversed = arr;
    reverse(arrReversed.begin(), arrReversed.end());
    vector<int> ldsReversed = calculateLIS(arrReversed);
    vector<int> lds(arr.size());
    for (int i = 0; i < arr.size(); ++i)
        lds[i] = ldsReversed[arr.size() - 1 - i];

    int maxBeauty = -1;
    for (int i = 1; i < arr.size() - 1; ++i)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1] && lis[i] > 1 && lds[i] > 1)
        {
            int totalLength = lis[i] + lds[i] - 1;
            maxBeauty = max(maxBeauty, totalLength);
        }
    }

    return maxBeauty;
}

int main()
{
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t)
    {
        cout << "Case " << t << ": ";
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        int result = solve(arr);
        cout << (result > 0 ? result : -1) << endl;
    }

    return 0;
}
