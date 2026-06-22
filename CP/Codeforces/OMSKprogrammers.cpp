#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

// Recursive function to find the minimum operations
long long get_min_ops(long long a, long long b, long long x) {
    // Base Case: cost to just increment the smaller number to match the larger one
    long long pure_increment_cost = abs(a - b);
    
    // If both numbers are 0, no operations are needed
    if (a == 0 && b == 0) return 0;

    // Try reducing the larger number by dividing it by x
    long long division_cost = 1e18; // Initialize with a large number
    
    if (a > b) {
        // Option A: Divide 'a' right now
        long long cost_now = 1 + (a % x) + get_min_ops(a / x, b, x);
        // Option B: Increment 'a' to the next multiple of x, then divide
        long long cost_next = (x - (a % x)) + 1 + get_min_ops((a + x - (a % x)) / x, b, x);
        
        division_cost = min(cost_now, cost_next);
    } 
    else if (b > a) {
        // Option A: Divide 'b' right now
        long long cost_now = 1 + (b % x) + get_min_ops(a, b / x, x);
        // Option B: Increment 'b' to the next multiple of x, then divide
        long long cost_next = (x - (b % x)) + 1 + get_min_ops(a, (b + x - (b % x)) / x, x);
        
        division_cost = min(cost_now, cost_next);
    }

    return min(pure_increment_cost, division_cost);
}

void solve() {
    long long a, b, x;
    cin >> a >> b >> x;
    cout << get_min_ops(a, b, x) << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}u 