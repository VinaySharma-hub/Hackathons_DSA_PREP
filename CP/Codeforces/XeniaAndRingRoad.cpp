#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  n;
    long long  m;
    cin >> n >> m;
    long long sum = 0;
    vector<int>array;
    int pre=1;
    while (m--)
    {   
        int x;
        cin>>x;
        array.push_back(x);
        if(x-pre<0){
            sum=sum+x-pre+n;
        }
        else{
        sum=sum+x-pre;
        }
        pre=x;
    }
    cout<<sum;
}