#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    while (cin >> r >> c && (r || c))
    {
        vector<vector<int>> field(r, vector<int>(c));
        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                cin >> field[i][j];
            }
        }
        // DP table to store the minimum path sums
        vector<vector<int>> dp(r, vector<int>(c, 0));

        // Initialize the first cell
        dp[0][0] = field[0][0];

        // Initialize the first column of the DP table
        for (int i = 1; i < r; i++)
        {
            dp[i][0] = dp[i - 1][0] + field[i][0];
        }

        // Initialize the first row of the DP table
        for (int j = 1; j < c; j++)
        {
            dp[0][j] = dp[0][j - 1] + field[0][j];
        }
        // Fill the DP table
        for (int i = 1; i < r; i++)
        {
            for (int j = 1; j < c; j++)
            {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + field[i][j];
            }
        }
        cout << dp[r - 1][c - 1] << endl;
    }
    return 0;
}
