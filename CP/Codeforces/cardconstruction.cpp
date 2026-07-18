#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    // Precompute the card limits up to 10^9
    vector<long long> cards_needed;
    long long h = 1;
    while (true) {
        long long needed = (3 * h * h + h) / 2;
        if (needed > 1e9) {
            break;
        }
        cards_needed.push_back(needed);
        h++;
    }

    int t;
    if (!(cin >> t)) return;
    while (t--) {
        long long n;
        cin >> n;
        int pyramids = 0;
        
        while (n >= 2) {
            // Find the first value strictly greater than n
            auto it = upper_bound(cards_needed.begin(), cards_needed.end(), n);
            if (it == cards_needed.begin()) {
                break;
            }
            it--; // Step back to get the largest possible pyramid size <= n
            n -= *it;
            pyramids++;
        }
        cout << pyramids << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}