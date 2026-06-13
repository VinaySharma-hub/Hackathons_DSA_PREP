#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int pre=0;
    int curr=1;
    int count=2;
    int next;
    while(count!=n+1){
        next=pre+curr;
        pre=curr;
        curr=next;
        count++;
    }
    cout<<next;

}