#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int sum1=0;
    vector<int>array;
    for(auto i=0;i<n;i++){
        int browo;
        cin>>browo;
        array.push_back(browo);
        sum1=browo+sum1;
    }
    int sum2=0;
    int count=0;
    sort(array.begin(),array.end());
    for(int i=n-1;i>=0;i--){
    sum2=sum2+array[i];
    count++;
    if(sum2>sum1/2){
        break;
    }
    }
    cout<<count;
}