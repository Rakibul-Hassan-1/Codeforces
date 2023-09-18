// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     string s;
//     cin >> s;
//     for (int i = 0; i < s.size(); i++)
//     {
//         // cout << 1 << " ";
//         if (s[i] >= 'A' && s[i] <= 'Z' || s[s.size()] >= 'a' && s[s.size()] <= 'z')
//         {
//             cout << s << endl;
//             break;
//         }
//         else
//         {
//             if (s[i] >= 'A' && s[i] <= 'Z')
//                 s[i] = s[i] + 'A';
//             cout << s << " ";
//             break;
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool flag = false;

    if (all_of(s.begin(), s.end(), ::isupper))
    {
        flag = true;
    }
    else if (s.size() > 1 && islower(s[0]) && all_of(s.begin() + 1, s.end(), ::isupper))
    {
        flag = true;
    }

    if (s.size() == 1)
    {
        if (islower(s[0]))
        {
            s = toupper(s[0]);
        }
        else
        {
            s = tolower(s[0]);
        }
    }
    else if (flag)
    {
        // refernce for both case
        for (char &c : s)
        {
            if (isupper(c))
            {
                c = tolower(c);
            }
            else
            {
                c = toupper(c);
            }
        }
    }

    cout << s << endl;

    return 0;
}
