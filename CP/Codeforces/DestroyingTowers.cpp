#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l;
    cin >> l;
    vector<int> array(l);
    for (int i = 0; i < l; i++) {
        cin >> array[i];
    }
    
    long long sum = 0; // Using long long is a safe habit for sum problems
    for (int i = 0; i < l - 1; i++) {
        if (array[i] < array[i+1]) {
            array[i+1] = array[i]; // Update to the prefix minimum
        }
        sum += array[i];
    }
    sum += array[l-1];
    
    cout << sum << "\n";
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
}