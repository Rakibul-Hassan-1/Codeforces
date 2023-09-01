#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        bool found = false;
        for (int i = 0; i < (1 << n); i++)
        {
            string temp = "";
            for (int j = 0; j < n; j++)
            {
                if (i & (1 << j))
                {
                    temp += s[j];
                }
            }
            if (!temp.empty())
            {
                int num = stoi(temp);
                if (isPrime(num) && temp.size() > 1)
                {
                    cout << num << endl;
                    found = true;
                    break;
                }
            }
        }
        if (!found)
            cout << -1 << endl;
    }
    return 0;
}
