#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n][2];
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i][0];
        cin >> array[i][1];
        if (array[i][1] - array[i][0] >= 2)
        {
            total++;
        }
    }
    cout << total;
}