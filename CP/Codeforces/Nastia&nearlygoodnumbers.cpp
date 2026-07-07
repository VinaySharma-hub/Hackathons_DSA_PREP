#include<bits/stdc++.h>
using namespace std;
#define int long long
#define var(x) (x).begin(),(x).end()
signed main(){
    int n;cin>>n;
    while(n){
    int a;
    int b;
    cin>>a>>b;
    if (b == 1) {
    cout << "NO" << "\n";
} else {
    cout << "YES" << "\n";
    // x = a, y = a * b, z = a * (b + 1)
    cout << a << " " << a * b << " " << a * (b + 1) << "\n";
}
    
    
    
    n--;
    }
}