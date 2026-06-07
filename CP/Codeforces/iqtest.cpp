#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>array;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        array.push_back(p);
    }
    int noofodd=0;
    int noofoeven=0;
    int fo=0;
    int fe=0;
    for(int i=0;i<n;i++){
        if(array[i]%2==0){
        if(fe==0){
            fe=i+1;
        }
        noofoeven++;
        }
        else {
            if(fo==0){
                fo=i+1;
            }
            noofodd++;
        }
    }
    if(noofodd>noofoeven){
        cout<<fe;
    }
    else cout<<fo;
}