#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

// Function to decode a run-length encoded string
string decodeRLE(const string &rle)
{
    string decoded;
    int count = 0;
    for (char ch : rle)
    {
        if (isdigit(ch))
        {
            count = count * 10 + (ch - '0');
        }
        else
        {
            decoded.append(count, ch);
            count = 0;
        }
    }
    return decoded;
}

// Function to adjust a string based on the last result of a type 3 query
string adjustString(const string &s, int lastResult)
{
    string adjusted;
    for (char ch : s)
    {
        int offset = ch - 'a';
        offset = (offset + lastResult) % 26;
        adjusted += ('a' + offset);
    }
    return adjusted;
}

// Main solving function
void solveProblem(int T)
{
    for (int t = 1; t <= T; ++t)
    {
        cout << "Case " << t << ":\n";
        map<string, int> dict;
        int lastType3Result = 0;
        int Q;
        cin >> Q;

        while (Q--)
        {
            int queryType;
            cin >> queryType;
            string S, S1, S2;
            int f;

            if (queryType == 1 || queryType == 2)
            {
                cin >> S >> f;
                S = decodeRLE(S);
                S = adjustString(S, lastType3Result);

                if (queryType == 1)
                {
                    dict[S] += f;
                }
                else
                {
                    dict[S] = max(0, dict[S] - f);
                    if (dict[S] == 0)
                    {
                        dict.erase(S);
                    }
                }
            }
            else if (queryType == 3)
            {
                cin >> S1 >> S2;
                S1 = adjustString(decodeRLE(S1), lastType3Result);
                S2 = adjustString(decodeRLE(S2), lastType3Result);
                int count = 0;

                for (auto it = dict.begin(); it != dict.end(); ++it)
                {
                    const string &key = it->first;
                    int value = it->second;
                    if (key >= S1 && key <= S2)
                    {
                        count += value;
                    }
                }

                cout << count << '\n';
                lastType3Result = count;
            }
        }
    }
}

int main()
{
    int T;
    cin >> T;
    solveProblem(T);
    return 0;
}
