#include <bits/stdc++.h>
using namespace std;

#define int long long

#define var(x) (x).begin(), (x).end()

signed main()
{
    int N;
    cin >> N;
    vector<int> adj[N+1];
    for (int i =0;i<N;i++){
    int c,v;
    cin>>c>>v;
    adj[c].push_back(v);
    adj[v].push_back(c);
    }
    for(int i =0;i<N;i++){
   
    for(auto v:adj[i]){
     cout<<v<<" ";
    }
    cout<<endl;
    }
}
    

