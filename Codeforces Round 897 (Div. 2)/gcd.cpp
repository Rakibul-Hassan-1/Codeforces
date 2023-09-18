#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    // Input the first element and initialize x with it
    cin >> arr[0];
    int x = arr[0];

    // Input the rest of the elements and compute the GCD
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        x = __gcd(x, arr[i]);
    }

    cout << x << endl;

    return 0;
}
