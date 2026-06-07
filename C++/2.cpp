#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    vector<int>nums={1,2,3,4,5,6,3,2,2,5};
    set<int>st(nums.begin(),nums.end());
    for(int x:st){
        cout<<x<<" ";
    }
}