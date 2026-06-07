#include<bits/stdc++.h>
using namespace std;

class Solution{
public: 
int countComponents(int V, vector<vector<int>>&edges){
    vector<vector<int>>adj(V);
    for( auto &e:edges){
        adj[e[0]].push_back(e[1]);
        adj[e[1]].push_back(e[0]);
    }
    vector<int>visited(V,0);
    int components=0;
    for(int i =0;i<V;i++){
        if(!visited[i]){
            components++;
            //starting the traversal
            queue<int>q;
            q.push(i);
            visited[i]=1;
            //perform bfs traversal 
            while(!q.empty()){
                int node =q.front();
                q.pop();
                //visit all visited neighbours 
                for(auto &nbr : adj[node]){
                    if(!visited[nbr]){
                        visited[nbr]=1;
                        q.push(nbr);
                    }
                }
            }
        }
    }
    return components;
}
};
int main(){
    int V=5;
    vector<vector<int>>edges={{0,1},{1,2},{3,4}};
    Solution sol;
    cout<<"Number of Connected Components:"
    <<sol.countComponents(V,edges)<<endl;
    return 0;


}

