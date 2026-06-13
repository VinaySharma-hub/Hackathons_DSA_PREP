#include <bits/stdc++.h>
using namespace std;

int solve(int id, int k, vector<int> &h, vector<int> &dp)
{
    if (id == 0)
        return 0;

    if (dp[id] != -1)
        return dp[id];

    int ans = INT_MAX;

    for (int jump = 1; jump <= k; jump++)
    {
        if (id - jump >= 0)
        {
            int cost = solve(id - jump, k, h, dp) + abs(h[id] - h[id - jump]);

            ans = min(ans, cost);
        }
    }

    return dp[id] = ans;
}

int frogJump(int n, int k, vector<int> &h)
{
    vector<int> dp(n, -1);
    return solve(n - 1, k, h, dp);
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    cout << frogJump(n, k, h);

    return 0;
}