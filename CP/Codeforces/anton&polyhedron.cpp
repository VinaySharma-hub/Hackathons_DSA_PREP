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
    int t ;
    cin>>t;
    int count=0;
    while(t--){
        string s;
        cin>>s;

        if(s=="Cube"){
            count= count+6;
        }
        else if(s=="Tetrahedron"){
            count= count+4;
        }
        else if(s=="Octahedron"){
            count= count+8;
        }
        else if(s=="Dodecahedron"){
            count= count+12;
        }
        else if(s=="Icosahedron"){
            count= count+20;
        }
    }
    cout<< count << endl;
}