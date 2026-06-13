#include<bits/stdc++.h>
using namespace std;

//  // Tabulation is a ‘bottom-up’ approach where 
// we start from the base case and reach the final answer
//  that we want

int climbStairs(int n) {
        vector<int>DP(n+1);
        DP[0]=1;
        DP[1]=1;
        for(int i=2;i<=n;++i){
            DP[i]=DP[i-1]+DP[i-2]; // recurrence into memorization of the code so that the codea will remain know ot hbhe j;ksysyatem sthat i ewhosulgfd ut=gfiollow the correc tiinito jn

        }
        return DP[n];
    }
int main(){
    int n;
    cin>>n;
    cout<<climbStairs(n);
}