#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define all(x) (x).begin(),(x).end()
#define var vector<int>

signed main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    var x(5,0),y(5,0);
    for(int i=1;i<=a;i++){
        x[i%5]++;
    }
    for(int i=1;i<=b;i++){
        y[i%5]++;
    }
    int ans=0;
    ans+=x[0]*y[0];
    ans+=x[2]*y[3];
    ans+=x[3]*y[2];
    ans+=x[4]*y[1];
    ans+=x[1]*y[4];
    cout<<ans;

}