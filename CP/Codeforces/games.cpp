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
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    vector<vector<int>>ans;
    while(t--){
        vector<int>nigga;
        int a,b;
        cin>>a>>b;
        nigga.push_back(a);
        nigga.push_back(b);
        ans.push_back(nigga);
    }
    int sum=0;
    int len=ans.size();
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(j==i){
                continue;
            }
            else{
            if(ans[i][1]==ans[j][0]){
                sum++;
            }
            }
        }

    }
    cout<<sum<<endl;
    


    return 0;
}