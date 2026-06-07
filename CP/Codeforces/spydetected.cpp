#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            if (i > 0 || i < n - 1)
            {
                if (arr[i] != arr[i + 1] && arr[i] == arr[i + 2])
                {
                    cout << (i + 2);
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            if (arr[0] != arr[1])
            {
                cout << 1;
            }
            if (arr[n - 1] != arr[n - 2])
            {
                cout << n;
            }
        }
        cout << endl;
    }
}
