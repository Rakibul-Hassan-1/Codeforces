#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;

    vector<int> v(26);

    for (int i = 0; i < 26; i++)
    {
        cin >> v[i];
    }

    int max_value = 0;
    int len = s.length();

    // Calculate the initial value of the string s
    for (int i = 0; i < len; i++)
    {
        max_value = max_value + (i + 1) * v[s[i] - 97];
    }

    //  notun charecter string minimize korar jonno

    for (int i = len + 1; i <= len + k; i++)
    {
        int letter_value = 0;
        for (int j = 0; j < 26; j++)
        {
            letter_value = max(letter_value, (i)*v[j]);
        }
        max_value += letter_value;
    }

    cout << max_value << endl;
    return 0;
}
