#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  // number of test cases

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int neg = 0, zero = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == -1) neg++;
            else if (a[i] == 0) zero++;
        }

        int ans;
        if (neg % 2 == 0) {
            // Even negatives → just make all zeros to 1
            ans = zero;
        } else {
            if (zero > 0) {
                // Odd negatives and at least one zero
                ans = zero + 1;
            } else {
                // Odd negatives, no zeros → convert one -1 to 1 (2 ops)
                ans = 2;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
