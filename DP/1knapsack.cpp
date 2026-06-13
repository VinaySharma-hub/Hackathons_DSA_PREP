#include<bits/stdc++.h>
using namespace std;
int knapsack(int w,vector<int>&val,vector<int>&wt,int n){
    if(n==0 || w==0){
return 0;
    }
    int pick=0;
    if(wt[n-1]<=w){
        pick=val[n-1]+knapsack(w-wt[n-1],val,wt,n-1);
    }
    int notpick=knapsack(w,val,wt,n-1);
    return max(pick,notpick);
}
int main(){
vector<int>val={1,2,4,3,5};
vector<int>wt={2,3,4,5,5};
int w=9;
int n=5;
int bro=knapsack(w,val,wt,n);
cout<<bro;
}