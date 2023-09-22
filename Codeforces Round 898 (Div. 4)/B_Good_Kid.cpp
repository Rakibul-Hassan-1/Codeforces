#include <bits/stdc++.h>
using namespace std;

long long getMaxProduct(int n, vector<int> &arr)
{
    long long product = 1;
    for (int i = 0; i < n; ++i)
    {
        product *= arr[i];
    }

    long long maxProduct = product;
    for (int i = 0; i < n; ++i)
    {
        long long tempProduct = (product / arr[i]) * (arr[i] + 1);
        maxProduct = max(maxProduct, tempProduct);
    }

    return maxProduct;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        cout << getMaxProduct(n, arr) << endl;
    }
    return 0;
}
