#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
void factorize(int n){
for(int i=2;i*i<=n;i++){
    if(n%i==0){
        int count=0;
        while(n%i==0){
            n/=i;
            count++;
        }
        cout<<i<<"^"<<count<<" ";
    }
}
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    factorize(n);
}
