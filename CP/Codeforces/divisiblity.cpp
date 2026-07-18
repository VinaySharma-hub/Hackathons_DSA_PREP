#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second

void solve() {
    int t1;
    cin>>t1;
    int t2;
    cin>>t2;
    if(t1%t2==0){
        cout<<0<<endl;
    }
    else if(t1<t2){
        cout<<t2-t1<<endl;
    }
    else{
    int bro=t1/t2+1;
    cout<<(bro*t2)-t1<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}