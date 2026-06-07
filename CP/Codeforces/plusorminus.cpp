#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n][3];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i][0];
        cin >> array[i][1];
        cin >> array[i][2];
        if (array[i][0] + array[i][1] == array[i][2])
        {
            cout << "+" << endl;
        }
        else
            cout << "-" << endl;
    }
}