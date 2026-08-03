#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second

void solve(vector<int>&array,int id,int target,int sum) {
    int n=array.size();
    if(sum==target && id==n-1){
        cout<<"Yes";
        return ;
    }
    
    if(id ==(n-1)){
        return;
    }
    solve(array,id+1,target,sum+array[id]+array[id+1]);
    solve(array,id+1,target,sum+array[id]-array[id+1]);
      
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int>array(n);
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int sum=0;
    solve(array,0,target,sum);

}