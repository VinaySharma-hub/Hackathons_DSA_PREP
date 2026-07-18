#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1="I hate ";
    string s2="I love ";
    string it="it";
    string that="that ";
    int t ;
    cin >> t;
    string ans="";
    for(int i =1;i<=t;i++){
    if(i%2!=0 ){
        
        ans+=s1;
    }
    if(i%2==0){
        ans+=s2;
    }
    if(t-i>=1){
        ans+=that;
    }
   

}
ans+=it;
cout<<ans;
}