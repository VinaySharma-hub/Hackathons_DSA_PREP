#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    vector<bool> used(n, false);
    vector<int> target_pos(n); 

    // Step 1: Pair up elements from left to right (Blueprint)
    for (int i = 0; i < n; i++) {
        int matched_idx = -1;
        for (int j = 0; j < n; j++) {
            if (!used[j] && a[j] <= b[i]) {
                matched_idx = j;
                break; 
            }
        }
        
        if (matched_idx == -1) {
            cout << -1 << "\n";
            return;
        }
        used[matched_idx] = true;
        target_pos[i] = matched_idx; 
    }

    // Step 2: Count the crossed paths (Inversions)
    int swaps = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (target_pos[i] > target_pos[j]) {
                swaps++;
            }
        }
    }
    cout << swaps << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}