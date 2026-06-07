#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        int a = 0, b = 0;

        // count power of 2
        while (n % 2 == 0)
        {
            n /= 2;
            a++;
        }

        // count power of 3
        while (n % 3 == 0)
        {
            n /= 3;
            b++;
        }

        // if leftover prime factor exists
        if (n != 1 || b < a)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << (2 * b - a) << "\n";
        }
    }
    return 0;
}
