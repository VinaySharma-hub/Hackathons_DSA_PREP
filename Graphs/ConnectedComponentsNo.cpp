#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define var(x) (x).begin(),(x).end()
void dfs(int node,vector<int>&vis,vector<int>&df,vector<int>adj[]){
  vis[node]=1;
    df.push_back(node);

for( auto h:adj[node]){
    if(!vis[h]){
    dfs(h,vis,df,adj);
    }
}
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
    vector<int>vis(N,0);
    vector<int>df;
    int count=0;
    for(int i=0;i<N;i++){
        
        if(!vis[i]){
            count++;
    dfs(i,vis,df,adj);
    }
}
    for(auto x:df){
        cout<<x<<" ";
    }
    cout<<"Number of components are "<<count;

}