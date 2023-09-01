#include <bits/stdc++.h>

using namespace std;

bool isPerfectSquare(long long num)
{
    long long root = static_cast<long long>(sqrt(num));
    return root * root == num;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        long long f_k_minus_2 = 1;
        long long f_k_minus_1 = n - 1;

        bool valid = false;

        if (k == 3)
        {
            valid = (f_k_minus_1 == 0);
        }
        else if (k >= 4)
        {
            while (k > 3)
            {
                long long f_k = f_k_minus_2 + f_k_minus_1;
                f_k_minus_2 = f_k_minus_1;
                f_k_minus_1 = f_k;
                --k;
            }
            valid = (f_k_minus_1 == 0);
        }

        cout << (valid ? 1 : 0) << endl;
    }

    return 0;
}
