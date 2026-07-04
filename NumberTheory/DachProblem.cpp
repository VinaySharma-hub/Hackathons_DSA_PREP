#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
bool bachproblem(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return n>1;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n; cin>>n;
    int k; cin>>k;

    vector<int>array;
    for(int i=2;i<=n;i++){
        if(bachproblem(i)){
            array.push_back(i);
        }
    }
    int count=0;
    if(array.size()>=2){
    for(int i=0;i<array.size()-2;i++){
        if(bachproblem(array[i]+array[i+1]+1) && (array[i]+array[i+1]+1)<=n){
            count++;
        }
    }
}



 if(k<=count){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}