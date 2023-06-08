#include <bits/stdc++.h>
#define R_H Rakibul Hassan
#define ll long long
#define nl endl
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define pii pair<int, int>
#define vector <int> vi
#define all_occarance (ctrl + shift + a)
#define f1(n) for (int i = 0; i < n; i++)
#define f2(a, n) for (int i = a; i < n; i++)

using namespace std;
int mergeMelodies(const string &melody)
{
    unordered_set<string> melodies;
    int count = 0;

    for (int i = 0; i < melody.length() - 1; i++)
    {
        string notes = melody.substr(i, 2);
        melodies.insert(notes);

        while (i < melody.length() - 2 && melody.substr(i + 1, 2) == notes)
        {
            i++;
        }
    }
    count = melodies.size();
    return count;
}
void solve()
{
    int n;
    cin >> n;

    string melody;
    cin >> melody;

    int count = mergeMelodies(melody);
    cout << count << endl;
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
