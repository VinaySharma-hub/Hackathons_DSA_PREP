#include<bits/stdc++.h>
using namespace std;
vector<int>doubled(const vector<int>&nums){
    vector<int>result;
    for(int x:nums){
        result.push_back(2*x);
    }
    return result;
}
int add(int a,int b){
   return a+b;
}
double add(double a,double b){
   return a+b;
}

int main(){
   vector<int>num={1,2,3};
   std::cout<<"hello ";
   cin>>num[0];
   std::cout<<num[0];
   int x{5};
   std::cout<<x;
   
   auto vinay="sex";
   std::cout<<vinay;
   unordered_map<int,vector<pair<int,int>>>mp;
   auto it=mp.begin();
   vector<int>nums={1,2,3,4,5};
   for(int x:nums){
         std::cout<<x<<" ";
   }
   for (auto x:nums){
         std::cout<<x<<" ";
   }
   for(auto &x:nums){
         std::cout<<x<<" ";
   }
   vector<int>array;
   array.push_back(1);
   array.push_back(2);
   std::cout<<array[0];
   array.size();

   nums.pop_back();
   // ios::sync_with_stdio(false); ### Makes input output much faster to be there in CP 
   // cin.tie(NULL);  ## Makes things much faster to be there in CP
   vector<int>b(3,4);
   cout<<b[0]<<" "<<b[1]<<" "<<b[2];
   vector<vector<int>> grid = {
    {1,2,3},
    {4,5,6}
};
for (const auto& row : grid) {

    for (const auto& val : row) {
        cout << val << " ";
    }
}
string s="vinay";
char c=s.back();
cout<<c;
cout<<endl;
for(const auto& ch:s){
    cout<<ch<<" ";
}
string v =s.substr(0,3);
cout<<v;
reverse(s.begin(),s.end());
cout<<s;
sort(s.begin(),s.end());
cout<<s;
vector<int>n={1,2,3,4};
vector<int>prefix(n.size());
prefix[0]=n[0];
for(auto i=1;i<n.size();i++){
      prefix[i]=prefix[i-1]+n[i];
}
cout<<endl;
for(const auto& x:prefix){
    cout<<x<<" ";
}
vector<vector<int>>matrix={
    {1,2,3},
    {4,5,6},
    {7,8,9}
   };
for(int i=0;i<matrix.size();i++){
    for(int j=0;j<matrix[0].size();j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}  
}