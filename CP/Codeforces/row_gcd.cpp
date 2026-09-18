#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        int g=0;
        for(int j=0;j<m;j++){
            g=__gcd(g,a[i]+b[j]);
        }
        ans[i]=g;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}