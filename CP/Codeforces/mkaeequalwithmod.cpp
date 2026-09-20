#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    bool has_one = false;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            has_one = true;
        }
    }

    if (!has_one) {
        cout << "YES\n";
        return;
    }

    sort(a.begin(), a.end());

    bool has_consecutive = false;
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] - a[i] == 1) {
            has_consecutive = true;
            break;
        }
    }

    if (has_consecutive) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
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