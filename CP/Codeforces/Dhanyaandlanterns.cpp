#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, l;
    cin >> n >> l;
    
    vector<int> array(n);
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    sort(array.begin(), array.end());
    
    // 1. Find the maximum gap between any two consecutive lanterns
    double max_gap = 0;
    for (int i = 1; i < n; i++) {
        max_gap = max(max_gap, (double)(array[i] - array[i-1]));
    }
    
    // The required radius to cover internal gaps is half of the max gap
    double ans = max_gap / 2.0;
    
    // 2. Check the boundary gap at the start of the street
    double start_gap = array[0] - 0;
    ans = max(ans, start_gap);
    
    // 3. Check the boundary gap at the end of the street
    double end_gap = l - array[n-1];
    ans = max(ans, end_gap);
    
    // Print the final answer with exactly 10 decimal places
    cout << fixed << setprecision(10) << ans << "\n";

    return 0;
}