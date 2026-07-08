#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define var(x) (x).begin(),(x).end()
bool dfs(int v,vector<int>adj[], vector<bool> &visited,vector<bool>&pathvisited, int parent)
{
    // Mark the current node as visited
    visited[v] = true;
    pathvisited[v]=true;
    // Recur for all the vertices adjacent to this vertex
    for (int i : adj[v])
    {
        // If an adjacent vertex is not visited, 
        //then recur for that adjacent
        if (!visited[i])
        {
           if( (dfs(i, adj, visited,pathvisited, v)))
           return true;
           
                
        }
        
        // If an adjacent vertex is visited and is not
        //parent of current vertex,
        // then there exists a cycle in the graph.
        else if (pathvisited[i]!=false)
            return true;
    }
    pathvisited[v]=false;
    return false;
}
bool isCycle(int n,vector<int>adj[])
{
    int V=n;
    // Mark all the vertices as not visited
    vector<bool> visited(V, false);
    vector<bool>pathvisited(V,false);
    for (int u = 0; u < V; u++)
    {
        if (!visited[u])
        {
            if (dfs(u, adj, visited,pathvisited,-1))
                return true;
        }
    }

    return false;
}
signed main(){
 int N;
    cin >> N;
    int E;
    cin>>E;
    vector<int> adj[N];
    for (int i =0;i<E;i++){
    int c,v;
    cin>>c>>v;
    adj[c].push_back(v);
    
    }
    
    cout<<isCycle(N,adj);

}