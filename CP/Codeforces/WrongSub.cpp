#include<iostream>
using namespace std;
int main() {
    int n;
    int k;
    cin>>n;
    cin>>k;
    int count=0;
    while(count<k){
    if(n%10==0){
        n=n/10;
    }
    else{
        n=n-1;
    }
    count++;
}
cout<<n;
}