#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        priority_queue<int> pq;

        for (int i = 0; i < n; ++i)
        {
            pq.push(a[i] + i);
            cout << pq.top() + 1 << " ";
            pq.pop();
        }
        cout << endl;
    }

    return 0;
}
