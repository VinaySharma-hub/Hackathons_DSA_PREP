#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second

int bulbswitch(vector<int>& array) {
    int count=0;
    for(int i =0;i<array.size();i++){
        if(array[i]==1){
            continue;
        }
        else{
            array[i]=1;
            count++;
            for(int j=i+1;j<array.size();j++){
                array[j]=abs(array[j]-1);
            }
     }
    }
    return count+1;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> array = {1, 0, 1, 0};
    int count=bulbswitch(array);
   cout<<count;
    return 0;
}