#include <iostream>
#include <vector>
#include <set>
using namespace std;

const int MAXN = 2e5 + 5;
vector<int> adj[MAXN];

bool canEscape(int n, int a, int b)
{
    if (a == b)
        return false; // They start from the same building

    for (int u : adj[a])
    {
        if (u == b)
        { // They are adjacent
            set<int> st;
            for (int v : adj[b])
            {
                st.insert(v);
            }
            for (int v : adj[a])
            {
                if (st.find(v) == st.end())
                {
                    return true; // There exists a building connected to Valeriu's building that is not connected to Marcel's building
                }
            }
            return false;
        }
    }
    return true; // Their distance is greater than 1
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        for (int i = 1; i <= n; ++i)
        {
            adj[i].clear();
        }
        for (int i = 0; i < n; ++i)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u); // Since it's an undirected graph
        }
        cout << (canEscape(n, a, b) ? "YES" : "NO") << endl;
    }
    return 0;
}
