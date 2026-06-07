#include<bits/stdc++.h>
using namespace std;
vector<int>bfs(int v, vector<int>adj[]){
    int vis[v];
    vis[0]=1;
    vector<int>bfs;
    queue<int>q;
    q.push(0);
    while(!q.empty()){
        int node =q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it : adj[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
    }
    return ;


}
