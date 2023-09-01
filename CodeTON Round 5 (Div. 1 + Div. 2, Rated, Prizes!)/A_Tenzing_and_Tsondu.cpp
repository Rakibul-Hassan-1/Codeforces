#include <bits/stdc++.h>
using namespace std;

string playCardGame(int n, int m, vector<int> &v1, vector<int> &v2)
{

    sort(v1.rbegin(), v1.rend());
    sort(v2.rbegin(), v2.rend());

    bool tsonduTurn = true;

    while (n > 0 && m > 0)
    {
        if (tsonduTurn)
        {

            int tsMonster = v1[0];
            int tzMonster = v2[0];

            v1[0] = tsMonster - tzMonster;
            v2[0] = tzMonster - tsMonster;

            if (v1[0] <= 0)
                v1.erase(v1.begin());
            if (v2[0] <= 0)
                v2.erase(v2.begin());

            n = v1.size();
            m = v2.size();

            tsonduTurn = false;
        }
        else
        {
            int tsMonster = v1[0];
            int tzMonster = v2[0];

            v1[0] = tsMonster - tzMonster;
            v2[0] = tzMonster - tsMonster;

            if (v1[0] <= 0)
                v1.erase(v1.begin());
            if (v2[0] <= 0)
                v2.erase(v2.begin());
            n = v1.size();
            m = v2.size();
            tsonduTurn = true;
        }
    }
    if (n > 0 && m == 0)
        return "Tsondu";
    else if (n == 0 && m > 0)
        return "Tenzing";
    else
        return "Draw";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> v1(n);
        vector<int> v2(m);

        for (int i = 0; i < n; i++)
            cin >> v1[i];

        for (int i = 0; i < m; i++)
            cin >> v2[i];

        string result = playCardGame(n, m, v1, v2);
        cout << result << endl;
    }

    return 0;
}