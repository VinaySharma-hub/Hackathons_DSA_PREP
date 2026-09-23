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

    int n,s;
    cin >> n>>s;
    vector<int>array(n);
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int i=0;
    int j=0;
    int sum=0;
    while(i<n){
        int tempsum=array[i];
        while(tempsum<=20){
            sum=sum+1;
            j++;
            tempsum=tempsum+array[j];
        }
        i=i+1;
        j=i;
    }
    cout<<sum;
}