#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag=false;
    while(n){
        int a;
        int b;
        cin>>a>>b;

        if(a<b){
        flag=true;
        }
        n--;
    }
    if(flag==true){
        cout<<"Happy Alex";
    }
    else{
        cout<<"Poor Alex";
    }
}