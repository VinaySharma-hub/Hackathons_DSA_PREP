#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--){
    vector<int>array(3,1);
    cin>>array[0];
    cin>>array[1];
    cin>>array[2];
    sort(array.begin(),array.end());
    cout<<array[1];
    cout<<endl;
}
}