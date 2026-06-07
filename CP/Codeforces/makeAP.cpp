#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a;
        cin >> b;
        cin >> c;
        int k = (2 * b - a) / c;
        int x = (2 * b - c) / b;
        if ((a + c) % (2 * b) == 0)
        {
            cout << "YES";
        }
        else if (2 * b - a)
        {
            if ((2 * b - a) % k == 0)
            {
                cout << "YES";
            }
        }
        else if (2 * b - c)
        {
            if ((2 * b - c) % x == 0)
            {
                cout << "YES";
            }
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
}