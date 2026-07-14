#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second
ll n;
map<ll,ll>prev_values;
ll query(ll index){
    if(prev_values.contains(index)){
        return prev_values[index];
    }
    if(index==0 || index==n+1){
        return INF;
    }
    cout<<"?"<<index<<endl;
    int value;
    cin>>value;
    return prev_values[index]=value;   
}


bool predicate()
int main() {
    cin>>n;
    ll value_at_index_1=query(n);
    ll l =0,r=n+1;
    while(r-l>1){
        int m =(l+r)/2;
        (predicate(m)) ? (l=m):(r=m);
    }
    cout<<l<<endl;
    

}