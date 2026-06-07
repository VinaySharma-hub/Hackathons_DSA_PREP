#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        long long a;
        cin >> a;

        long long lo = 0, hi = sqrt(a);
        bool found = false;

        while (lo <= hi)
        {
            long long mid = lo + (hi - lo) / 2;
            long long sq = mid * mid;

            if (sq == a)
            {
                found = true;
                break;
            }
            else if (sq < a)
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }

        if (found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
