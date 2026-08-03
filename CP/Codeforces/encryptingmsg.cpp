#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, c;
    if (!(cin >> n >> m >> c)) return 0;

    // Read initial array a of size n
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Read key array b of size m
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    // STEP 1: Build the Prefix Sum Array for b
    // pref[k] stores the sum of b[0 ... k-1]
    // We use size (m + 1) to easily handle 1-based indexing differences.
    // Example: if b = [1, 2, 3], then pref = [0, 1, 3, 6]
    vector<long long> pref(m + 1, 0);
    for (int i = 0; i < m; i++) {
        pref[i + 1] = pref[i] + b[i];
    }

    // STEP 2: Calculate the encrypted value for each position a[i]
    for (int i = 0; i < n; i++) {
        
        // Find the leftmost index in b that ever touches a[i].
        // The total number of shifts is (n - m).
        // If we shift the key as far right as possible, element b[i - (n - m)] lands on a[i].
        // But since b starts at index 0, L cannot be less than 0.
        int L = max(0, i - (n - m));

        // Find the rightmost index in b that ever touches a[i].
        // On the very first step (shift 0), b[i] aligns with a[i].
        // But since b has only m elements (indices 0 to m-1), R cannot exceed m - 1.
        int R = min(m - 1, i);

        // Retrieve the sum of b[L ... R] in O(1) time using our prefix sum array.
        // sum(b[L...R]) = pref[R + 1] - pref[L]
        long long added_sum = pref[R + 1] - pref[L];

        // STEP 3: Add total key contribution to original message a[i] and take modulo c
        int ans = (a[i] + added_sum) % c;

        // Output the result space-separated
        cout << ans << (i == n - 1 ? "" : " ");
    }
    
    cout << "\n";
    return 0;
}