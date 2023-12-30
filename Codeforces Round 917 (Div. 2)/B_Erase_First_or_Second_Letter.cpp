#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        set<char> st;
        long long count = 0;
        for (auto x : s)
        {
            st.insert(x);
            count += st.size();
            // cout << st.size() << " ";
        }
        cout << count << endl;
        // cout << endl;
    }

    return 0;
}
