#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        // Precompute prefix sums of |a| and suffix sums of a
        // S(k) for 1-indexed k where a[k-1]>0:
        //   = sum(|a[0..k-2]|) - a[k-1] + sum(a[k..n-1])
        // S(0) = sum(a)  [do nothing]
        //
        // prefix_abs[i] = sum of |a[0..i-1]|  (prefix_abs[0]=0)
        // suffix_val[i] = sum of a[i..n-1]     (suffix_val[n]=0)

        vector<long long> prefix_abs(n + 1, 0);
        for (int i = 0; i < n; i++)
            prefix_abs[i + 1] = prefix_abs[i] + abs(a[i]);

        vector<long long> suffix_val(n + 1, 0);
        for (int i = n - 1; i >= 0; i--)
            suffix_val[i] = suffix_val[i + 1] + a[i];

        long long S0 = suffix_val[0];
        long long best = S0;
        int best_k = 0; // 0 means do nothing

        for (int k = 1; k <= n; k++) {
            if (a[k - 1] > 0) {
                // S(k) = prefix_abs[k-1] - a[k-1] + suffix_val[k]
                long long Sk = prefix_abs[k - 1] - a[k - 1] + suffix_val[k];
                if (Sk > best) {
                    best = Sk;
                    best_k = k;
                }
            }
        }

        if (best_k == 0) {
            cout << 0 << "\n\n";
            continue;
        }

        // Build ops: easy_version on a[0..best_k-2], then append best_k
        // Easy version: scan right-to-left, collect ops when effective value > 0
        vector<int> ops;
        int flip = 0;
        for (int i = best_k - 2; i >= 0; i--) {
            long long cur = (flip % 2 == 0) ? a[i] : -a[i];
            if (cur > 0) {
                ops.push_back(i + 1); // 1-indexed
                flip++;
            }
        }
        // ops are in right-to-left order of the prefix (correct execution order for easy version)
        ops.push_back(best_k);

        cout << ops.size() << "\n";
        for (int i = 0; i < (int)ops.size(); i++) {
            cout << ops[i];
            if (i + 1 < (int)ops.size()) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}