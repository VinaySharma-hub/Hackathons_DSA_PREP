#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int s;
        int k;
        int m;
        cin>>s;
        cin>>k;
        cin>>m;
        if(s<k){
            cout<<0;
        }
        else if(k==m){
            cout<<m;
        }
        else {
            int result=m%k;
            cout<<result;
        }
        
    }
}