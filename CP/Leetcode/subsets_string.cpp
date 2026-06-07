#include<bits/stdc++.h>
using namespace std;
void storesubsets(string original,string ans,vector<string>&s,bool flag){
if(original==""){
    s.push_back(ans);
    return;
}
char ch=original[0];
if(original.length()==1){
    if(flag==true)
    storesubsets(ans+ch,original.substr(1),s,true);
    return;
}
char dh=original[1];
if(ch==dh){
    if(flag==true){
        storesubsets(ans+ch,original.substr(1),s,true);
        storesubsets(ans,original.substr(1),s,false);
    }
}
}
int main(){
    string s="aba";
    string ans;
    string original;
    vector<string>sh;
    bool vinay=true;
    storesubsets(s,ans,sh,vinay);
    

}