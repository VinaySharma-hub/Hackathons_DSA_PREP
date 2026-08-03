#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    int g[n+1][m+1],p[n+1][m+1]{};
    for (int i =1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cin>>g[i][j];
            p[i][j]=g[i][j]+p[i-1][j]+p[i][j-1]-p[i-1][j-1];
        }
    }
    int q;cin>>q;
    while(q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
      cout << p[c][d]
        - p[a-1][d]
        - p[c][b-1]
        + p[a-1][b-1]
     << endl;
    }
    }
