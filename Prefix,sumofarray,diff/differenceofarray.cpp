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
    int n,q;
    cin>>n>>q;
    int a[n+2]{};
    while(q--){
        int l ,r ,k; cin>>l>>r>>k;
        a[l]+=k;  // Add k from L to N
                 
        a[r+1]-=k; // Removes k from R+1 to N
        // In total , add k from L to R 
    }
    for (int i=1;i<=n;i++){
        a[i]+=a[i-1];
    }
    for (int i =1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}