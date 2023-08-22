#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int m, k, a1, ak;
        std::cin >> m >> k >> a1 >> ak;

        // Use regular coins worth k burles as much as possible
        int k_coins_needed = m / k;
        int k_coins_from_regular = std::min(k_coins_needed, ak);
        m -= k_coins_from_regular * k;

        // If the remaining amount is less than k and more than available regular coins worth 1 burle
        if (m < k && m > a1)
        {
            std::cout << 1 << '\n'; // Use one fancy coin worth k burles
            continue;
        }

        // Use regular coins worth 1 burle as much as possible
        int one_coins_from_regular = std::min(m, a1);
        m -= one_coins_from_regular;

        // If there's still some amount remaining, use fancy coins
        int fancy_k_coins_needed = m / k;
        m -= fancy_k_coins_needed * k;
        int fancy_one_coins_needed = m;

        int total_fancy_coins_needed = fancy_k_coins_needed + fancy_one_coins_needed;

        std::cout << total_fancy_coins_needed << '\n';
    }
    return 0;
}
