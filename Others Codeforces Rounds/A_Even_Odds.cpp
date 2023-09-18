// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int n, target;
//     cin >> n >> target;
//     vector<int> v_even;
//     vector<int> v_odd;

//     if (n % 2 == 0)
//     {
//         for (int i = 1; i < n; i += 2)
//         {
//             v_odd.push_back(i);
//         }
//         for (int i = 0; i <= n; i += 2)
//         {
//             v_even.push_back(i);
//         }
//     }
//     else
//     {
//         for (int i = 1; i <= n; i += 2)
//         {
//             v_odd.push_back(i);
//         }
//         for (int i = 0; i < n; i += 2)
//         {
//             v_even.push_back(i);
//         }
//     }

//     // v_even.erase(v_even.begin());

//     v_odd.insert(v_odd.end(), v_even.begin(), v_even.end());

//     for (int i = 0; i < n; i++)
//     {
//         if (v_odd[i] == target)
//         {
//             cout << i << endl;
//             break;
//         }
//     }

//     // for (auto x : v_odd)
//     //     cout << x << " ";
//     // cout << v_odd.size() << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;

    long long odd = (n + 1) / 2;

    if (k <= odd)
    {
        cout << 2 * k - 1 << endl;
    }
    else
    {
        cout << 2 * (k - odd) << endl;
    }

    return 0;

    return 0;
}