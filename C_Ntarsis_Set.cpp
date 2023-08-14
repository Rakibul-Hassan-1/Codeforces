#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        // Use a priority queue (min-heap) to keep track of the elements in the set.
        priority_queue<int, vector<int>, greater<int>> pq;

        // Insert the initial elements 1, 2, 3, ..., 101000 into the priority queue.
        for (int i = 1; i <= 101000; ++i)
        {
            pq.push(i);
        }

        // Process the days.
        for (int day = 1; day <= k; ++day)
        {
            // Remove the a1-th, a2-th, ..., an-th smallest elements from the set.
            for (int i = 0; i < n; ++i)
            {
                pq.pop();
            }
        }

        // The smallest element in S after k days will be at the top of the priority queue.
        cout << pq.top() << endl;
    }

    return 0;
}
