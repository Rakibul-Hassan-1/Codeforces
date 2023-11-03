#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int seconds = s.size();

        if (s[0] != '1')
            s = "1" + s;

        for (int i = 0; i < s.size() - 1; i++)
        {
            int current = s[i] - '0';
            int next = s[i + 1] - '0';

            if (current == 0 || next == 0)
            {
                if (current == next)
                    continue;
                else if (current == 9 || next == 9)
                    seconds++;
                else
                {
                    int output = abs(current - next);
                    int res = 10 - output;
                    seconds += res;
                }
            }
            else
            {
                seconds += abs(next - current);
            }
        }

        cout << seconds << "\n";
    }
    return 0;
}