#include <bits/stdc++.h>
using namespace std;
string decimalToBinary(int n)
{
    if (n == 0)
        return "0";
    string binary = "";
    while (n > 0)
    {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    return binary;
}

int main()
{
    int decimalNumber;
    cin >> decimalNumber;
    string binary = decimalToBinary(decimalNumber);
    cout << binary << endl;

    return 0;
}
