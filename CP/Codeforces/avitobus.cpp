#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second

void solve() {
    int a;
    cin>>a;
    if (a < 4 || a % 2 == 1) {
        cout<<-1<<endl;
    }
    else{
    int mini;
    if (a % 6 == 0) {
        mini = a / 6;
    } 
    else if(a%6==2){
        mini = (a - 8) / 6 + 2;
    }
    else{
        mini = (a - 4) / 6 + 1;
    }
    int maxi ;
    if (a % 4 == 0) {
        maxi = a / 4;
    } 
    else {
        maxi = (a - 6) / 4 + 1;
    }
    cout << mini << " " << maxi << endl;
}
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}