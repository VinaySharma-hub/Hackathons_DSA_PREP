#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    int max_val = -1, min_val = 101;
    int max_idx = -1, min_idx = -1;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        // Pick the FIRST occurrence of the maximum element
        if (a[i] > max_val) {
            max_val = a[i];
            max_idx = i;
        }

        // Pick the LAST occurrence of the minimum element
        if (a[i] <= min_val) {
            min_val = a[i];
            min_idx = i;
        }
    }

    // Direct math calculation
    int ans = max_idx + (n - 1 - min_idx);

    // If max is to the right of min, they cross paths during swapping (saving 1 swap)
    if (max_idx > min_idx) {
        ans--;
    }

    cout << ans << "\n";

    return 0;
}