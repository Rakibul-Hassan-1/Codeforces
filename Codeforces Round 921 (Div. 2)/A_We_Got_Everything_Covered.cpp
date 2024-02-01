#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n, k, m;
        cin >> n >> k >> m;
        string s;
        cin >> s;
        map<int, int> mp;
        for (auto it : s)
            mp[it]++;
        char ch = 'a';
        string res;
        bool flag = 1;
        for (int i = 0; i < k; i++)
        {
            if (mp[ch + i] < n)
                flag = 0;
            for (int j = 0; j < n; j++)
            {
                res.push_back(ch + i);
            }
            break;
        }
        if (flag)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
            cout << res << endl;
        }
    }

    return 0;
}
