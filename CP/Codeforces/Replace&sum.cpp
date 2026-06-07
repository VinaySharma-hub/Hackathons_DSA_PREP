#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        // FIX 1: base array should be b only
        vector<long long> brray(n);
        for (int i = 0; i < n; i++)
            brray[i] = b[i];

        // FIX 2: correct suffix maximum (right to left)
        for (int i = n - 2; i >= 0; i--)
            brray[i] = max(brray[i], brray[i + 1]);

        // FIX 3: prefix sum for fast range sum
        vector<long long> pref(n + 1, 0);
        for (int i = 0; i < n; i++)
            pref[i + 1] = pref[i] + brray[i];

        while (q--)
        {
            int l, r;
            cin >> l >> r;

            // FIX 4: correct range sum
            cout << pref[r] - pref[l - 1] << " ";
        }
        cout << "\n";
    }
}
