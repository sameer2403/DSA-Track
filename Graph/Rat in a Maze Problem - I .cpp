#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
private:
    void dfs(int x, int y, vector<vector<int>> &visited, string path, vector<vector<int>> &m, int n, vector<string> &ans)
    {
        if (x == n - 1 && y == n - 1)
        {
            ans.push_back(path);
            return;
        }
        if ((x >= 0 && x < n) && (y >= 0 && y < n) && m[x][y] == 1 && visited[x][y] == 0)
        {
            visited[x][y] = 1;
            dfs(x - 1, y, visited, path + "U", m, n, ans);
            dfs(x + 1, y, visited, path + "D", m, n, ans);
            dfs(x, y - 1, visited, path + "L", m, n, ans);
            dfs(x, y + 1, visited, path + "R", m, n, ans);
            visited[x][y] = 0;
        }
        else
            return;
    }

public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        // Your code goes here
        vector<string> ans;
        if (m[n - 1][n - 1] == 0 || m[0][0] == 0)
            return ans;
        vector<vector<int>> vis(n, vector<int>(n));
        string path = "";
        dfs(0, 0, vis, path, m, n, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
} // } Driver Code Ends