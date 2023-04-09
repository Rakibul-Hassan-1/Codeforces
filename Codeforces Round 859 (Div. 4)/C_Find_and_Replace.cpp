#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define all_occarance (ctrl + shift + a)
#define pii pair<int, int>

using namespace std;

void solve()
{
  int n;
  string s;
  cin>>n>>s;

  for(int i=0; i<n; i++){
    for(int j=n;j>0;j--){
        if(s[i]==s[j]){
            cout<<"1";
        }
    }
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
