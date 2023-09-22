#include <iostream>
#include <string>
using namespace std;

int maxCoins(string s)
{
    int coins = 0;
    for (int i = 0; i < s.size() - 1; ++i)
    {
        if (s[i] == 'A' && s[i + 1] == 'B')
        {
            s[i + 1] = 'C'; // Change AB to BC
            coins++;
            i++; // Skip next character
        }
        else if (s[i] == 'B' && s[i + 1] == 'A')
        {
            s[i] = 'C'; // Change BA to CB
            coins++;
            i++; // Skip next character
        }
    }
    return coins;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    
    {
        string s;
        cin >> s;
        cout << maxCoins(s) << endl;
    }
    return 0;
}
