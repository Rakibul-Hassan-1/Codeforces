#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define fasterIO()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

vector<int> getDivisors(int n)
{
    vector<int> divisors;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (i != n / i)
            {
                divisors.push_back(n / i);
            }
        }
    }
    return divisors;
}

bool check(vector<int> &arr, int x, int m)
{
    int n = arr.size();
    for (int i = x; i < n; i++)
    {
        if (arr[i % x] % m != arr[i] % m)
            return false;
    }
    return true;
}

int sovle(vector<int> &arr)
{
    int n = arr.size();
    if (n == 1)
        return 1;
    vector<int> divisors = getDivisors(n);
    int points = 0;
    int maxe = *max_element(arr.begin(), arr.end()) + 1;

    for (auto x : divisors)
    {
        bool found = false;
        for (int m = 2; m <= maxe; m++)
        {
            if (check(arr, x, m))
            {
                found = true;
                break;
            }
        }
        if (found)
            points++;
    }
    return points;
}
int main()
{
    fasterIO();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &a : arr)
            cin >> a;
        cout << sovle(arr) << endl;
    }
    return 0;
}
