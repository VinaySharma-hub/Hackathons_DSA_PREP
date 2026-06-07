#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n){
        int l,k;
        cin>>l;
        cin>>k;
        vector<int>nums(l);
        for(int i=0;i<l;i++){
            cin>>nums[i];
        }
        int sum=0;
        for(auto x:nums){
            sum+=x;
        }
        if(sum%2==0){
            sum=k*l;
            if(sum%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else {
            cout<<"YES"<<endl;
        }
    n--;
    }
}