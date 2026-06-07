#include<iostream>
using namespace std;
int main() {
    string s;
    cin>>s; // uppercase 65 to 90 and
    //  lowercase 97 to 122
    int n=s.size();
    int uppercase=0;
    int lowercase=0;
    for( int i=0;i<n;i++){
    
     if (s[i]>=65 && s[i]<=90){
        uppercase++;
     }
     else {
        lowercase++;
     }
    }
if(lowercase>=uppercase){
    for(int i =0;i<n;i++){
        if(s[i]<97){
        s[i]=s[i]+32;
        }
    }
}
else if(uppercase>lowercase){
     for(int i =0;i<n;i++){
        if(s[i]>= 'a'){
        s[i]=s[i]-32;
        }
    }

}
cout<<s;
}