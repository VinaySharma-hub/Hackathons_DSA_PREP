#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second



signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int>array={4,5,6,4,3,6,4,5,9};
    int n=array.size();
    int k=array[0]+array[1];
    int maxi=k;
    for(int i=2;i<n;i++){
    k+=array[i]-array[i-2];
    maxi=max(maxi,k);
    }
    cout<<maxi;
    return 0;
}