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

    int t;
    cin >> t;
    vector<int>array(t);
    for(int i =0;i<t;i++){
cin>>array[i];
    }
    int counts=0;
    for(int i=0;i<t-1;i++){
        if(array[i]!=array[i+1]){
            counts++;
        }
    }

    cout<<counts+1;
}