#include<bits/stdc++.h>
using namespace std;
int main() {
 int n;
 cin>>n;
 int x;
 int browo=0;
 while(n>0){
    x=n%10;
    if(x!=4 && x!=7){
        cout<<"NO";
        browo=1;
        break;
    }
    n=n/10;
 }
 if(browo!=1)
 cout<<"YES";
}
