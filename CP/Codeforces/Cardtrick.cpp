#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int m;
    cin >> m; // Read m properly
    
    int total_shifts = 0;
    for (int i = 0; i < m; i++) {
        int b;
        cin >> b;
        total_shifts += b; // Accumulate all shuffles
    }
    
    // The top card index after all shuffles modulo n
    int top_index = total_shifts % n;
    
    cout << a[top_index] << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}