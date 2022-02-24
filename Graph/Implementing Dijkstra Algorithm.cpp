#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{

public:
    // Function to find the shortest distance of all the vertices
    // from the source vertex S.
    vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int> dist(V, INT_MAX);
        dist[S] = 0;
        // min-heap ; In pair(dist, from)
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, S}); // (dist, from)
        while (!pq.empty())
        {
            int distance = pq.top().first; // prev distance
            int node = pq.top().second;    // prev node
            pq.pop();
            // vector<pair<int,int>>::iterator it;
            for (auto it : adj[node])
            {   // if distance of adj node is greater than the
                // distance of previous node via source + distance b/w prev node and the adj node
                if (dist[it[0]] > it[1] + distance)
                {
                    dist[it[0]] = it[1] + distance;
                    pq.push({dist[it[0]], it[0]});
                }
            }
        }
        return dist;
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
        vector<vector<int>> adj[V];
        int i = 0;
        while (i++ < E)
        {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1, t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin >> S;

        Solution obj;
        vector<int> res = obj.dijkstra(V, adj, S);

        for (int i = 0; i < V; i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends
// Expected Time Complexity: O(V^2).
// Expected Auxiliary Space: O(V^2).