#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second

void solve() {
    int n;
    cin >> n;
    int price;
    cin>>price;
    int total=0;
    vector<int> array(n);
    for(int i =0;i<n;i++){
        cin>>array[i];
    }
    bool bro=false;
    for(int i =0;i<n;i++){
        if(array[i]>price){
            total+=array[i]-price;
        }
        else{
            if(bro){
                total+=array[i];
            }
            else{
                total+=array[i]/2;
            }
            if(!bro){
            for(int j =i;j<n-1;j++){
                array[j]=array[j]/2;
                bro=true;
            }
        }
        }
    }
    cout<<total<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t;
    while (t--) {
        solve();
    }

  
}