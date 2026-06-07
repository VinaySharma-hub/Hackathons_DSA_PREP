#include <bits/stdc++.h>
using namespace std;

int dist[2001][2001];
vector<int> adj[2001];

void bfs(int src, int n)
{
    queue<int> q;
    fill(dist[src] + 1, dist[src] + n + 1, -1);
    dist[src][src] = 0;
    q.push(src);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (dist[src][v] == -1)
            {
                dist[src][v] = dist[src][u] + 1;
                q.push(v);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;

        for (int i = 1; i <= n; i++)
            adj[i].clear();

        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // BFS from each vertex: O(n^2)
        for (int i = 1; i <= n; i++)
            bfs(i, n);

        // Key insight: The minimal connected subgraph (Steiner tree) containing
        // vertices a, b, c in a tree has exactly:
        //   size = (dist(a,b) + dist(b,c) + dist(a,c)) / 2 + 1  vertices
        //
        // We want this = d, i.e., dist(a,b)+dist(b,c)+dist(a,c) = 2*(d-1)
        //
        // For each pair (a,c) with a < c, count b with a < b < c such that
        // dist(a,b) + dist(b,c) = 2*(d-1) - dist(a,c)

        long long ans = 0;
        int target = 2 * (d - 1);

        for (int a = 1; a <= n; a++)
        {
            for (int c = a + 2; c <= n; c++)
            { // need at least one b between a and c
                int dac = dist[a][c];
                int need = target - dac;
                if (need < dac)
                    continue; // triangle inequality: sum >= dac
                for (int b = a + 1; b < c; b++)
                {
                    if (dist[a][b] + dist[b][c] == need)
                    {
                        ans++;
                    }
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}