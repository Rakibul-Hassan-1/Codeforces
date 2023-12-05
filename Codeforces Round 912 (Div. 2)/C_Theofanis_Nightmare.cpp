#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct SegmentTree
{
    int n;
    vector<long long> tree;

    SegmentTree(int size)
    {
        n = size;
        tree.assign(4 * n, 0);
    }

    void update(int idx, int val, int node, int left, int right)
    {
        if (left == right)
        {
            tree[node] = val;
            return;
        }
        int mid = (left + right) / 2;
        if (idx <= mid)
            update(idx, val, 2 * node, left, mid);
        else
            update(idx, val, 2 * node + 1, mid + 1, right);
        tree[node] = max(tree[2 * node], tree[2 * node + 1]);
    }

    void update(int idx, int val)
    {
        update(idx, val, 1, 0, n - 1);
    }

    long long query(int ql, int qr, int node, int left, int right)
    {
        if (ql <= left && right <= qr)
            return tree[node];
        if (qr < left || ql > right)
            return 0; // Neutral element for maximum operation
        int mid = (left + right) / 2;
        long long left_max = query(ql, qr, 2 * node, left, mid);
        long long right_max = query(ql, qr, 2 * node + 1, mid + 1, right);
        return max(left_max, right_max);
    }

    long long query(int ql, int qr)
    {
        return query(ql, qr, 1, 0, n - 1);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        SegmentTree seg_tree(n);
        long long max_cypriot = 0;

        for (int i = 0; i < n; ++i)
        {
            int current_element = arr[i];
            long long prev_max_cypriot = seg_tree.query(0, i - 1);
            long long cypriot_value = (i + 1LL) * current_element + prev_max_cypriot;
            max_cypriot = max(max_cypriot, cypriot_value);
            seg_tree.update(i, cypriot_value);
        }

        cout << max_cypriot << endl;
    }

    return 0;
}
