#include<bits/stdc++.h> 
using namespace std;
 int main(){
    int n;
    cin>>n;
    int min=0;
    int maxi=0;
    while(n){
        int a;
        cin>>a;
        int b;
        cin>>b;
        min+=b-a;
        maxi=max(maxi,min);
        n--;
    }
    cout<<maxi;
 }