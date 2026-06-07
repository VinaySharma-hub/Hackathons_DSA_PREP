#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>array={1,2,3,6,5,4,8,7};
    int k =0;
    int x=3;
    int n=array.size();
    for(int b=n/2;b>=1;b/=2){
        while(k+b<n && array[k+b]<=x){
            k+=b;
        }
        if(array[k]==x){
            // index found 
        }
    }
}
// vector structure is the dynamic array in c++
