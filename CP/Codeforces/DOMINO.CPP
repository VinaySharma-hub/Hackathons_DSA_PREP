#include<bits/stdc++.h>
using namespace std;
int main() {
    int M ;
    int N;
    cin>>M;
    cin>>N;
    if(M%2==0){
        cout<<((M*N)/2);
    }
    else cout<<(((M-1)*N)/2)+N/2;
}