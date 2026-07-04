#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
void sieve(int n){
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(int i =2;i*i<=n;i++){
        if(prime[i]){
            for(int j = i*2;j<=n;j+=i){
                prime[j]=false;
            }
    }
}
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    sieve(100);
}
