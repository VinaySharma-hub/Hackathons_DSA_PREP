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
    cin>>t;
    int bro;
    cin>>bro;
    set<int>array3;
    vector<int>array1(bro);
    for(int i =0;i<bro;i++){
        int a;
        cin>>a;
        array1[i]=a;
        array3.insert(a);
    }
    int vin;
    cin>>vin;
    vector<int>array2(vin);
    for(int i=0;i<vin;i++){
        int b;
        cin>>b;
        array2[i]=b;
        array3.insert(b);
    }
    if((array3.size())==t){
        cout<<"I become the guy.";
    }
    else {
        cout<<"Oh, my keyboard!";
    }
    


    return 0;
}