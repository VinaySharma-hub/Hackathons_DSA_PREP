#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    s.insert(3);
    s.insert(3);
    s.insert(2);
    s.erase(2);
    cout<<s.count(3);
    s.insert(34);
    for(int i:s){
cout<<i<<endl;
    }
    multiset<int>multi;
    multi.insert(3);
    multi.insert(3);
    multi.insert(3);
    for  (auto i :multi){
        cout<<i<<endl;
    }
    multi.erase(3);
}