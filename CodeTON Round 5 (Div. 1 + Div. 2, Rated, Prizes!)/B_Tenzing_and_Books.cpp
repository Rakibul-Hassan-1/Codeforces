#include <iostream>
#include <vector>
using namespace std;

bool canAchieveKnowledge(int n, int x, const vector<int> &a, const vector<int> &b, const vector<int> &c)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            for (int k = 0; k <= n; k++)
            {
                int knowledge = 0;
                for (int idx = 0; idx < i; idx++)
                {
                    knowledge |= a[idx];
                }
                for (int idx = 0; idx < j; idx++)
                {
                    knowledge |= b[idx];
                }
                for (int idx = 0; idx < k; idx++)
                {
                    knowledge == c[idx];
                }
                if (knowledge == x)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        if (canAchieveKnowledge(n, x, a, b, c))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
