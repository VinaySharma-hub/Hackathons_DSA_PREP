#include<bits/stdc++.h>
using namespace std;
int main() {
    int N ;
    cin>>N;
    vector<int> v(N);   
    for(int i=0;i<N;i++){
        cin>>v[i];
    }
    int array[N];
    array[N-1]=v[N-1];
    for(int i=N-1;i>=0;i=i-2){
        array[i-1]=abs(v[i]-array[i-1]);
    }