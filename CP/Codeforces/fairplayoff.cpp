#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        vector<int> array;
        int n = 4;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            array.push_back(val);
        }
        int val1;
        int val2;
        for (int i = 0; i < n; i = i + 2)
        {
            if (i == 0)
            {
                if (array[i] < array[i + 1])
                {
                    val1 = array[i + 1];
                }
                else
                    val1 = array[i];
            }
            if (i == 2)
            {
                if (array[i] < array[i + 1])
                {
                    val2 = array[i + 1];
                }
                else
                    val2 = array[i];
            }
        }
        sort(array.begin(), array.end());
        int sum = array[2] + array[3];
        if (sum != (val1 + val2))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
