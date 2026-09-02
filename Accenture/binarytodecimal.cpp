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

    int n=1010;
    vector<int>array(n, 0);
    int bro=n;
    int count=0;
    int sum=0;
    while(bro>0){
     int pi=bro%10;
     sum+=pi*pow(2,count);
     bro/=10;
     count++;
    }
    cout<<sum<<endl;
}