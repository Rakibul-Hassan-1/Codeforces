#include <bits/stdc++.h>
using namespace std;

int currentDay(int d, int m, int y)
{
    return (d += m < 3 ? y-- : y - 2, 23 * m / 9 + d + 4 + y / 4 - y / 100 + y / 400) % 7;
}

int isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string day;
        cin >> day;
        string d = "";
        string m = "";
        string y = "";
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '/')
            {
                count++;
                continue;
            }
            if (count == 0)
            {
                d += s[i];
            }
            else if (count == 1)
            {
                m += s[i];
            }
            else
            {
                y += s[i];
            }
        }

        int dd = stoi(d);
        int mm = stoi(m);
        int yy = stoi(y);

        int firstDay = currentDay(01, mm, yy);

        cout << "|---------------------------|"
             << "\n";
        cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|";

        int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        string daysOfWeek[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

        // Check for leap year
        int currDay = 1;

        if (isLeapYear(yy))
            daysInMonth[1] = 29;

        vector<vector<int>> v(5);

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                if (i == 0 && j < firstDay)
                {
                    v[i].push_back(-1);
                }
                else if (currDay <= daysInMonth[mm - 1])
                {
                    v[i].push_back(currDay);
                    currDay++;
                }
                else
                {
                    v[i].push_back(-1);
                }
            }
        }

        int lastDay = v[4][6];

        if (lastDay != -1)
        {
            int remaining = daysInMonth[mm - 1] - lastDay;

            for (int i = 0; i < remaining; i++)
            {
                lastDay++;
                v[0][i] = lastDay;
            }
        }

        for (int i = 0; i < 5; i++)
        {
            cout << "\n|---------------------------|"
                 << "\n";
            for (int j = 0; j < 7; j++)
            {
                cout << "|";
                if (v[i][j] == -1)
                {
                    cout << " - ";
                }
                else
                {
                    int digits = to_string(v[i][j]).size();

                    if (digits == 1)
                        cout << "  " << v[i][j];
                    else
                        cout << " " << v[i][j];
                }
            }

            cout << "|";
        }

        cout << "\n|---------------------------|\n\n";
    }
    return 0;
}