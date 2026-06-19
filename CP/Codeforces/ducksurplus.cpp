#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long mx = a[0];

        for (int i = 1; i < n; i++) {
            if (mx > a[i]) {
                mx += a[i];
            } else {
                mx = a[i];
            }
        }

        cout << mx << '\n';
    }

    return 0;
}