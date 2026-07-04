#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l;
    cin>>l;
    vector<int>array(n);
    for(int i =0;i<n;i++){
        cin>>array[i];
    }
    int width=0;
    for(int i=0;i<n;i++)
    {
        if(array[i]>l){
            width+=2;
        }
        else width+=1;
    }
    cout<<width;

}