#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int t;
    cin >> t;
    vector<char> array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    while(t){
        for(int i=0;i<n-1;i++){
            if(array[i]=='B' && array[i+1]=='G'){
             swap(array[i],array[i+1]);
             i++;
            }
        }
        t--;
    }
    for(int i=0;i<n;i++){
        cout<<array[i];
    }
}