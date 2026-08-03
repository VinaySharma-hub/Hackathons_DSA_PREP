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

    int t;
    cin>>t;
    vector<int>array(t);
    for(int i=0;i<t;i++){
    cin>>array[i];
    }
    sort(array.begin(),array.end());
    for(int i=0;i<t;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}