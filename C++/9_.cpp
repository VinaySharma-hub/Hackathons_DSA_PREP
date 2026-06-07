#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(4);
    d.push_back(3);
    d.push_back(1);
    d.push_front(3);
    d.pop_back();
    d.pop_back();
    d.pop_front();
    stack<int>s;
    queue<int>q;
    s.push(3);
    s.pop();
    s.push(3);
    for(auto i:{3,4,5,5}){
        s.push(i);
        cout<<s.top();
    }
    s.top();
 
}