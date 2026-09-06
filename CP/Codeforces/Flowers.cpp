#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MAXN = 100000;
const int MOD = 1000000007;

int tc, k;
int dp[MAXN + 5];
int pre[MAXN + 5];

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    if (!(cin >> tc >> k)) return 0;

    // 1. Fill DP array iteratively
    dp[0] = 1;
    for (int i = 1; i <= MAXN; i++) {
        if (i < k) {
            dp[i] = 1;
        } else {
            dp[i] = (dp[i - 1] + dp[i - k]) % MOD;
        }
    }

    // 2. Precompute Prefix Sum Array with MOD
    pre[0] = 0;
    for (int i = 1; i <= MAXN; i++) {
        pre[i] = (pre[i - 1] + dp[i]) % MOD; // Fix Bug 1
    }

    // 3. Answer each query in O(1) time
    while (tc--) {
        int a, b;
        cin >> a >> b;

        // Fix Bug 2: O(1) direct calculation instead of a loop
        int ans = (pre[b] - pre[a - 1] + MOD) % MOD;
        cout << ans << endl;
    }

    return 0;
}