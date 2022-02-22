#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    bool checkCycle(int node, vector<int> &vis, vector<int> &dfsVis, vector<int> adj[])
    {
        vis[node] = 1;
        dfsVis[node] = 1;

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                if (checkCycle(it, vis, dfsVis, adj))
                    return true;
            }
            else if (dfsVis[it] == 1)
            {
                return true;
            }
        }
        dfsVis[node] = 0;
        return false;
    }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[])
    {
        // code here
        vector<int> vis(V, 0);
        vector<int> dfsVis(V, 0);

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                if (checkCycle(i, vis, dfsVis, adj))
                    return true;
            }
        }
        return false;
    }
};

// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
// } Driver Code Ends