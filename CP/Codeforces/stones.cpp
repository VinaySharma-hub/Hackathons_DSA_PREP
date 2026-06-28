#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<char>name(n);
    for(int i=0;i<n;i++){
        cin>>name[i];
    }
    int count=0;
    for(auto i=1 ;i<n;i++){
        if(name[i]==name[i-1]){
            count++;
        }
    }
    cout<<count;
}