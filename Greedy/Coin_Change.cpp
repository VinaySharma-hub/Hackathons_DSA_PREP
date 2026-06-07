#include<bits/stdc++.h>
using namespace std;
int main() {
    int n =8;
    int array[n]={1,2,5,10,50,100,500,1000};
    int value ;
    cout<<"Input the value of the value";
    cin>>value;
    reverse(array,array+n);
    int i =0;
    int sum=0;
    while(i<n){
    if(value>=array[i] && value>0){
    value=value-array[i];
    sum++;
    }
    else {
        i++;
    }
    if(value==0){
        break;
    }
    }
    cout<<sum;



}