#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<std::vector<int>> arrays(n);
        std::vector<int> mins(n);

        for (int i = 0; i < n; ++i)
        {
            int m;
            std::cin >> m;
            arrays[i].resize(m);
            for (int j = 0; j < m; ++j)
            {
                std::cin >> arrays[i][j];
            }
            mins[i] = *std::min_element(arrays[i].begin(), arrays[i].end());
        }

        // Sort the minimums to find the second smallest minimum
        std::sort(mins.begin(), mins.end());

        // The maximum beauty can be achieved by moving the second smallest minimum to the array with the smallest minimum
        int max_beauty = 0;
        for (int i = 0; i < n; ++i)
        {
            if (arrays[i].size() > 1 && *std::min_element(arrays[i].begin(), arrays[i].end()) == mins[0])
            {
                max_beauty += mins[1];
            }
            else
            {
                max_beauty += mins[0];
            }
        }

        std::cout << max_beauty << '\n';
    }

    return 0;
}
