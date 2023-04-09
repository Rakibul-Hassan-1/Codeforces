#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define all_occarance (ctrl + shift + a)
#define pii pair<int, int>

using namespace std;

void solve()
{
    int arr[1000];
    int n, mihal = 0, bianca = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            mihal += arr[i];
        }
        else
        {
            bianca += arr[i];
        }
    }
    if(mihal>bianca){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
