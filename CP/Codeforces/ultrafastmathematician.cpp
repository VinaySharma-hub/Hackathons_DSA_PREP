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

    string s;
    string b;
    cin>>s>>b;
    int n=s.length();
    vector<int>array;
    for(int i =0;i<n;i++){
    int c=(s[i]-'0')^(b[i]-'0');
    array.push_back(c);
    }
    for(auto i : array){
cout<<i;
    }
    

    
}