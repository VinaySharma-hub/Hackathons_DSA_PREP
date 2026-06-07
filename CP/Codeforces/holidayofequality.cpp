#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int>array;
    int n ;
    cin>>n;
    int value;
    for(int i =0;i<n;i++){
        cin>>value;
        array.push_back(value);
    }
    sort(array.begin(),array.end());
    int maximum=array[n-1];
    int sum=0;
    for(int i =0;i<n;i++){
sum=sum+maximum-array[i];
    }
    cout<<sum;
}