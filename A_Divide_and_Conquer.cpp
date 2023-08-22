#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }

        if (sum % 2 == 0)
        {
            cout << "0" << endl;
        }

        else
        {
            sum = 0;
            int i = 0;
            while (sum % 2 == 0)
            {
                if (arr[i] % 2 == 0)
                {
                    arr[i] /= 2;
                    sum += arr[i];
                    count++;
                    i++;
                    continue;
                }
                sum += arr[i];
                i++;
            }
            cout << count << endl;
        }
    }

    return 0;
}