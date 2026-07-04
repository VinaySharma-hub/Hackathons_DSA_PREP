#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    bool flag = true;
    for (auto i : array)
    {
        if (i != 0)
        {
            flag = false;
            break;
        }
    }
    if (flag == false)
    {
        cout << "HARD";
    }
    else
        cout << "EASY";
}