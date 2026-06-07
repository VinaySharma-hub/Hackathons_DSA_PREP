#include<bits/stdc++.h>
using namespace std;
int n=3;
vector<int>subset;
void search(int k ){
    if(k==n){
        cout<<"{";
        for(auto x:subset){
            cout<<x<<"";
        }
        cout<<"}\n";
        return;
    }
    search(k+1);
    subset.push_back(k);
    search(k+1);
    subset.pop_back();
}
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
cout<<"all subsets generatd by recursion";
search(0);
}