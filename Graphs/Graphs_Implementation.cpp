#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // int m ;
    // cin>> n;
    // cin>>m;
    // int odj[n+1][m+1];
    // for(int i =0;i<n;i++){
    //     int u;
    //     int v;
    //     cin>>u;
    //     cin>>v;
    //     odj[u][v]=1;
    //     odj[v][u]=1;
    // }
// adjancency list 
    int nodes=5;
    vector<int>adj[nodes];
    adj[0].push_back(1);
    adj[1].push_back(0);

    adj[0].push_back(2);
    adj[2].push_back(0);

    adj[1].push_back(3);
    adj[3].push_back(1);

    adj[1].push_back(4);
    adj[4].push_back(1);

}

    

