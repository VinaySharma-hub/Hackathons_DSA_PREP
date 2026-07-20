#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>array={2 ,4 ,6, 8 ,10};
    int target=10;
    int n=array.size();
    int hi=n-1;
    int lo=0;
    int mid;
    bool flag =true;
    while(lo<=hi){
         mid=lo+(hi-lo)/2;
        if(array[mid]==target){
            flag=false;
            if(mid<n-2){
            mid++;
            }
            break;
        }
        else if(array[mid]>target){
            hi=mid-1;
        }
     
        else lo=mid+1;
    }
    if(flag){
    cout<<array[lo];
    }
    else cout<<array[mid];
}
