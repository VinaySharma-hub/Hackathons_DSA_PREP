#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        bool flag = true;
        int n;
        cin >> n;
        vector<int>arr;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
        
        }
        sort(arr.begin(),arr.end());
        for(int i=1;i<n;i++){
        
            if (arr[i] - arr[i - 1] > 1)
            {
                if (flag)
                {
                    flag = false;
                    cout << "NO";
                    break;
                }
            }
        }
    
        if (flag || n == 1)
        {

            cout << "YES";
        }
        cout << endl;
    }
}