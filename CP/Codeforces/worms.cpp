#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    vector<int> prefix_sums(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int worms;
        cin >> worms;
        sum += worms;
        prefix_sums[i] = sum; // Correctly assigning instead of push_back
    }

    int t;
    cin >> t;
    while (t--) {
        int val;
        cin >> val;
        
        // lower_bound finds the first element >= val
        auto it = lower_bound(prefix_sums.begin(), prefix_sums.end(), val);
        
        // Convert iterator to 1-based index
        int pile_index = (it - prefix_sums.begin()) + 1;
        cout << pile_index << "\n";
    }

    return 0;
}