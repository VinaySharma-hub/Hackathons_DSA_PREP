#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string a;
    cin >> s;
    cin >> a;
    int n = s.length();
    int l = a.length();
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != a[n - 1 - i])
        {
            flag = true;
            break;
        }
    }
    if (n != l)
    {
        cout << "NO";
    }
    else if (flag == true)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}