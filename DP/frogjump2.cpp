#include<bits/stdc++.h>
using namespace std;
 int frogJump(const vector<int>& height) {
        // Handle empty input
        if (height.empty()) return 0;

        // Fetch size of the input
        int n = (int)height.size();

        // Create dp array where dp[i] = min energy to reach i
        vector<int> dp(n, INT_MAX);

        // Base case: cost to stand on first stone is zero
        dp[0] = 0;

        // Iterate over stones from index 1 to n-1
        for (int ind = 1; ind < n; ind++) {
            // Compute cost for a jump from ind-1
            int jumpOne = dp[ind - 1] + abs(height[ind] - height[ind - 1]);

            // Initialize jumpTwo with large value
            int jumpTwo = INT_MAX;

            // If possible, compute cost for a jump from ind-2
            if (ind > 1) {
                jumpTwo = dp[ind - 2] + abs(height[ind] - height[ind - 2]);
            }

            // Take the minimum of the two options
            dp[ind] = min(jumpOne, jumpTwo);
        }

        // Return min energy to reach last stone
        return dp[n - 1];
    }

int main() {
    // Define the heights array
    vector<int> height{30, 10, 60, 10, 60, 50};

    // Create Solution instance


    // Compute and print the minimum energy
    cout << sol.frogJump(height) << endl; // Expected: 40
    return 0;
}