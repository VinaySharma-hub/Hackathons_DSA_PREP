#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<char>st(n);
    for(int i =0;i<n;i++){
        cin>>st[i];
    }
    int danik=0;
    int anton=0;
    for(int i=0;i<n;i++){
    if(st[i]=='D'){
        danik++;
    }
    else {
        anton++;
    }
}
if(danik>anton){
    cout<<"Danik";
}
else if(danik==anton){
    cout<<"Friendship";
}
else{
    cout<<"Anton";
}
}