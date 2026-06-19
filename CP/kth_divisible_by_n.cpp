#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        int k;
        cin>>k;
        int count=0;
        int i =1;
        while(count!=k){
        if(i%n!=0){
            count++;
        }
        i++;
        }
        cout<<(i-1)<<endl;
        t--;
    }
}