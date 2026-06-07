#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>bills;
    int n ;
    cin>>n;
    for(int i =0;i<n;i++){
        int a;
        cin>>a;
        bills.push_back(a);
    }
    int  five=0;
    int ten=0;
    for(int i=0;i<n;i++){
        if(bills[i]==5){
            five++;
        }
        if(bills[i]==10){
            if(five>=1)
            five--;
            ten++;
        }
        if(bills[i]==20){
            if(ten>=1 && five>=1){
                ten--;
                five--;
            }
            else {
            ten=100;
        break;}
        }
    }
    if(ten==100){
        cout<<"false";
    }
    else cout<<"true";
}