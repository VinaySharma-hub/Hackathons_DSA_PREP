#include<bits/stdc++.h>
using namespace std;
// Tabulation is a ‘bottom-up’ approach where 
// we start from the base case and reach the final answer that we want
int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,0);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<n+1;i++){
    dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n];
}