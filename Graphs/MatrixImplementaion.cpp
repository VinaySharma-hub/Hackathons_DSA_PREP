#include <bits/stdc++.h>
using namespace std;
#define int long long
#define var(x) (x).begin(), (x).end()

signed main()
{
    int n, m;
    cin >> n >> m;
    int adj[n][m];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << adj[i][j];
        }
    }
}