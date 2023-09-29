#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, ith_bit;
    cin >> n >> ith_bit;

    // create a bitmask
    int bit_mask = (1 << ith_bit);
    int position = n & bit_mask;
    cout << position;

    return 0;
}