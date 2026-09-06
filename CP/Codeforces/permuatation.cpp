#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0; // Fixed: Start at 0 so gcd(0, x) = x
    for (int i = 0; i < n; i++)
    {
        // Fixed: Use abs() to ensure non-negative distance and std::gcd
        ans = std::gcd(ans, abs(a[i] - (i + 1))); 
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int k = solve();
        cout << k << endl;
    }

    return 0;
}