// this program is for minimum bit should requaired to remove to convert 12 to 15
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int num1, num2;
    cin >> num1 >> num2;
    num1 = (num1 ^ num2);
    int count = 0;
    
    while (num1 > 0)
    {
        count += (num1 & 1);
        num1 = (num1 >> 1);
    }
    cout << count << endl;

    return 0;
}