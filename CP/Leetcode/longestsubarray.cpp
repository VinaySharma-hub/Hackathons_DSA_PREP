#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>array={1,2,4,5,3,5,3,6};
    int k=14;
    int maxlen=0;
    int n=array.size();
    long long sum=0;
    map<long long , int>presumMap;
    for(int i=0;i<n;i++){
   sum+=array[i];
   if(sum==k){
    maxlen=max(maxlen,i+1);
   }
   int res=sum-k;
   if(presumMap.find(res)!=presumMap.end()){
    int size=i-presumMap[res];
    maxlen=max(maxlen,size);
   }
   presumMap[sum]=i;
    }
    cout<< maxlen;
}