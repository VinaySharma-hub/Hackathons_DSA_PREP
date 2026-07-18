#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> pre(n);

    int bal = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1)
            bal++;
        else
            bal--;

        pre[i] = bal;
    }

    int cur = 0;
    vector<int> suf(n + 1, INT_MIN);

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == 3)
            cur--;
        else
            cur++;

        suf[i] = max(suf[i + 1], cur);
    }

    cur = 0;

    for (int i = 0; i <= n - 3; i++) {
        if (a[i] == 3)
            cur--;
        else
            cur++;

        if (pre[i] >= 0 && suf[i + 1] >= cur) {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
        solve();
}