#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
        }
        // The answer is always 1.
        //
        // Why: At each step, x = max-index leaf is uniquely determined (no choice involved).
        // Removing any "other" leaf y can only expose new leaves with index < x (since all
        // nodes with index > x are currently active but non-leaves). Therefore x never
        // decreases; the sequence of max-leaves is fully determined by the tree structure,
        // not by our choices. Hence S is the same regardless of which leaves we remove,
        // giving exactly 1 distinct set S.
        cout << 1 << "\n";
    }
    return 0;
}