#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define var(x) (x).begin(),(x).end()
bool detect(int src,vector<int>adj[],int vis[]){
    vis[src]=1;
    queue<pair<int,int>>q;
    q.push({src,-1});
    while(!q.empty()){
        int node=q.front().first;
        int parent=q.front().second;
        q.pop();
        for(auto adjacentnode : adj[node]){
            if(!vis[adjacentnode]){
                vis[adjacentnode]=1;
                q.push({adjacentnode,node});
            }
            else if(parent!=adjacentnode){
                return true;
            }
        }
    }
    return false;

}
bool iscycle(int N,vector<int>adj[]){
    int vis[N]={0};
    for(int i=0;i<N;i++){
        if(!vis[i]){
            if(detect(i,adj,vis))return true;
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
    adj[v].push_back(c);
    }
    
    cout<<iscycle(N,adj);

}