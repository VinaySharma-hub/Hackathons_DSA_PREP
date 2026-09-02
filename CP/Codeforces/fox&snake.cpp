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

    int m;
    int n;
    cin>>m;
    cin>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i%2==0){
                cout<<"#";
            }
            else{
                if(i%4==1 && j==n-1){
                    cout<<"#";
                }
                else if(i%4==3 && j==0){
                    cout<<"#";
                }
                else{
                    cout<<".";
                }
            }
        }
        cout<<endl;
    }
}