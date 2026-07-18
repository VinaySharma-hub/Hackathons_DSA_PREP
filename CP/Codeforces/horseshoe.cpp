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
    vector<int>array;
    int t1;
    cin>>t1;
     int t2;
     cin>>t2;
     int t3;
     cin>>t3;
     int t4;
     cin>>t4;
     array.push_back(t1);
     array.push_back(t2);
     array.push_back(t3);
     array.push_back(t4);
     int counts=0;
     sort(array.begin(),array.end());
     for(int i=0;i<array.size()-1;i++){
     if(array[i]==array[i+1]){
        counts++;
     }
     }
     cout<<counts;
    

    
}