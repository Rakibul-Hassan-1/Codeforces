#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        // The maximum cost can be achieved by arranging the numbers in the following pattern:
        // [1, 2, 4, 3, 5, 6, 8, 7, ...]
        // The cost is then calculated as the sum of products of adjacent numbers minus the product of the two largest numbers.

        int cost = 0;
        for (int i = 1; i <= n / 2; ++i)
        {
            cost += i * (i + 1);
        }
        cost -= (n - 1) * n; // Subtracting the product of the two largest numbers

        if (n % 2 != 0)
        {
            cost += n; // If n is odd, add the last number to the cost
        }

        std::cout << cost << '\n';
    }

    return 0;
}
