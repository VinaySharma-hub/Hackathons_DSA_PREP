class Solution
{
public:
    // DFS returns the total area of the island it finds
    int dfs(int id, vector<int> &vis, vector<vector<int>> &adj, vector<vector<int>> &grid, int m)
    {
        vis[id] = 1; // Mark as visited
        int area = 1;

        for (auto neighbor : adj[id])
        {
            int r = neighbor / m;
            int c = neighbor % m;

            // CRITICAL: Only visit if it's land (1) and hasn't been visited (-1)
            if (grid[r][c] == 1 && vis[neighbor] == -1)
            {
                area += dfs(neighbor, vis, adj, grid, m);
            }
        }
        return area;
    }

    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> adj(n * m);
        vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

        // Build adjacency graph
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int u = i * m + j;
                for (auto &[dx, dy] : dir)
                {
                    int ni = i + dx;
                    int nj = j + dy;
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m)
                    {
                        adj[u].push_back(ni * m + nj);
                    }
                }
            }
        }

        vector<int> vis(n * m, -1);
        int maxi = 0;

        for (int i = 0; i < n * m; i++)
        {
            int r = i / m;
            int c = i % m;

            // Only trigger a search if we hit unvisited land
            if (grid[r][c] == 1 && vis[i] == -1)
            {
                int current_area = dfs(i, vis, adj, grid, m);
                maxi = max(maxi, current_area);
            }
        }
        return maxi;
    }
};