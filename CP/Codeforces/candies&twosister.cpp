#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int number;
        cin>>number;
        if(number%2==0){
            cout<<number/2-1;
        }
        else cout<<number/2;
        cout<<endl;
    }
}