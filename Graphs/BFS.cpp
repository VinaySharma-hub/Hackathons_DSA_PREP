#include <bits/stdc++.h>
using namespace std;
#define int long long
#define var(x) (x).begin(), (x).end()
void bfs(int start, vector<int> &vis, vector<int>adj[])
{
    queue<int> q;
    q.push(start);
    vis[start] = 1;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (int neigh : adj[node])
        {
            if (!vis[neigh])
            {
                vis[neigh] = 1;
                q.push(neigh);
            }
        }
    }
}
signed main()
{
    int N;
    cin >> N;
    vector<int> adj[N + 1];
    for (int i = 0; i < N - 1; i++)
    {
        int c, v;
        cin >> c >> v;
        adj[c].push_back(v);
        adj[v].push_back(c);
    }
    vector<int> vis(N, 0);

    int components = 0;

    for (int i = 0; i < N; i++)
    {
        if (!vis[i])
        {
            components++;
            bfs(i, vis, adj);
        }
    }

    cout << "Connected Components = " << components << endl;

    return 0;
}