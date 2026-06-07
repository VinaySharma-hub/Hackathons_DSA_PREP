#include<bits/stdc++.h>
using namespace std;
bool comp(string a, string b){
    if(a.size()!=b.size()){
        return a.size()<b.size();
    }
    return a<b;
}
int main(){
    string a="vinay";
    string b="aditya";
    cout<<comp(a,b);
    
}