#include <bits/stdc++.h>
using namespace std;

#define ull long long
#define endl '\n'
#define repi(a, b, c) for (int i = a; i <= (b); i = i + c)

const int MAX = 200005;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ull n, k, q;
    cin >> n >> k >> q;

    vector<ull> temp(MAX, 0);
    vector<ull> bt(MAX, 0);

    // 1. Process ranges using difference array
    for (int i = 0; i < n; i++) {
        ull x, y;
        cin >> x >> y;
        temp[x]++;
        temp[y + 1]--;
    }

    // 2. Compute prefix sum to find actual counts per temperature
    ull sum = 0;
    for (int i = 0; i < MAX; i++) {
        sum += temp[i];
        if (sum >= k) {
            bt[i] = 1;
        } else {
            bt[i] = 0;
        }
    }

    // 3. Compute prefix sum of admissible temperatures for O(1) range queries
    for (int i = 1; i < MAX; i++) {
        bt[i] += bt[i - 1];
    }

    // 4. Answer queries
    while (q--) {
        ull x, y;
        cin >> x >> y;
        ull ans = bt[y] - bt[x - 1];
        cout << ans << endl;
    }

    return 0;
}