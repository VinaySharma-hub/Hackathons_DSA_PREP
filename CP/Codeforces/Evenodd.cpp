#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    if (cin >> n >> k) {
        // Calculate the total number of odd integers up to n
        int odds = (n + 1) / 2;

        if (k <= odds) {
            // k-th odd number
            cout << 2 * k - 1 << endl;
        } else {
            // Find the even number by subtracting the offset of odd numbers
            cout << 2 * (k - odds) << endl;
        }
    }

    return 0;
}