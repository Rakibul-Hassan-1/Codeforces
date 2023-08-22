#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();

        if (n % 2 == 0 && s[0] == '(' && s[n - 1] == ')')
        {
            cout << "NO\n";
        }

        else
        {
            cout << "YES\n";

            for (int i = 1; i <= n; ++i)
            {
                cout << (i % 2 == 0 ? '(' : ')');

                for (int i = 1; i <= n; ++i)
                {
                    if (i % 2 == 0)
                    {
                        cout << '(';
                        continue;
                    }

                    else
                    {
                        cout << ')';
                    }
                }
            }

            cout << '\n';
        }
    }
    return 0;
}
