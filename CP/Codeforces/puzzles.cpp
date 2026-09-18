#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t >> n;

    vector<int> array(n);
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    sort(array.begin(), array.end());

    int min_diff = INT_MAX;

    // Check all contiguous windows of size t
    for (int i = 0; i <= n - t; i++) {
        int diff = array[i + t - 1] - array[i];
        min_diff = min(min_diff, diff);
    }

    cout << min_diff << '\n';

    return 0;
}