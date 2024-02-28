#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> adj;     // Adjacency list for the tree
vector<int> values;          // Values associated with each node
vector<int> platonicNumbers; // Platonic numbers for each node

// DFS function to calculate Platonic numbers
void dfs(int node, int parent, vector<int> &prefixMax)
{
    if (node != 1)
    {
        // Calculate the Platonic number for the current node
        platonicNumbers[node] = values[node] + prefixMax.back();
    }
    else
    {
        // For the root node, its Platonic number is its own value
        platonicNumbers[node] = values[node];
    }

    for (int child : adj[node])
    {
        if (child != parent)
        {
            // Update prefix maximum values for the path to the child
            int newMax = max(prefixMax.back(), values[child]);
            prefixMax.push_back(newMax);

            // Recursive DFS call for the child node
            dfs(child, node, prefixMax);

            // Backtrack: remove the last element added to prefixMax
            prefixMax.pop_back();
        }
    }
}

int main()
{
    int t; // Number of test cases
    cin >> t;

    while (t--)
    {
        int n; // Number of nodes in the tree
        cin >> n;

        // Resize and initialize global variables for each test case
        adj.assign(n + 1, vector<int>());
        values.assign(n + 1, 0);
        platonicNumbers.assign(n + 1, 0);

        // Read the values associated with each node
        for (int i = 1; i <= n; ++i)
        {
            cin >> values[i];
        }

        // Read the edges and build the tree
        for (int i = 0; i < n - 1; ++i)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // Start DFS from the root node with its value as the initial prefix max
        vector<int> prefixMax = {values[1]};
        dfs(1, -1, prefixMax);

        // Output the Platonic numbers for all nodes
        for (int i = 1; i <= n; ++i)
        {
            cout << platonicNumbers[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
