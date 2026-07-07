#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    while(n--){
        int k;
        cin >> k;
        // 2 and k - 1 will always yield a remainder of 1
        cout << 2 << " " << k - 1 << "\n";
    }
    return 0;
}