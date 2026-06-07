#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int l;

        cin >> l;
        int v = l;
        int maxi = 0;
        int diff;
        int prev = -1;
        bool flag = false;
        vector<int> array;
        while (l--)
        {
            int x;
            cin >> x;
            array.push_back(x);
        }

        for (int i = 0; i < v; i++)
        {
            if (array[i] == 1)
            {
                diff = i - prev - 1;
                maxi = max(diff, maxi);
                prev = i;
                flag = true;
            }
        }
        if (!flag)
        {
            cout << v;
        }
        if (flag)
        {
            cout << maxi;
        }
        cout << endl;
    }
}