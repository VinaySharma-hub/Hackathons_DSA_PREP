#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int n =s.length();

    for(int i =0;i<n;i++){
        if(s[0]>=97){
            s[0]=s[0]-32;
        }
        if(s[i]<97 && i!=0){
            s[i]=s[i]+32;
        }
    }
    cout<<s;
}