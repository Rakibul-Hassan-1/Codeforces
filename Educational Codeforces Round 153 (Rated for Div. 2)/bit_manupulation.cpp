#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < 10; i++)
    {
        cout << i << " : ";

        if (i & 1)
            cout << "Odd" << endl;

        else
            cout << "Even" << endl;
    }

    return 0;
}