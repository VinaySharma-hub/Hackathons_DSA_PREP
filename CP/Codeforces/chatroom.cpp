#include<bits/stdc++.h>
using namespace std;
int main() {
    string s="hello";
    string f;
    cin>>f;
    int j=0;
    int n=f.size();
    for(int i=0;i<n;i++){
        if(f[i]==s[j]){
            j++;
            if(j==5){
                break;
            }
        }
    }
    if(j==5){
        cout<<"YES";
    }
    else cout<<"NO";
}