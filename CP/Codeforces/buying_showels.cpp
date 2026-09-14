#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int s, k;
    cin >> s >> k;

    int max_package = 1; // Largest valid package size <= k

    for (int i = 1; i * i <= s; i++)
    {
        if (s % i == 0)
        {
            // Option 1: package size is i
            if (i <= k)
            {
                max_package = max(max_package, i);
            }
            // Option 2: package size is (s / i)
            if (s / i <= k)
            {
                max_package = max(max_package, s / i);
            }
        }
    }

    cout << s / max_package << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}