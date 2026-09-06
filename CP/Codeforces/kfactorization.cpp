#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<int> factors;

    // Find the first k - 1 prime factors
    for (int d = 2; d * d <= n; ++d) {
        while (n % d == 0 && factors.size() < k - 1) {
            factors.push_back(d);
            n /= d;
        }
    }

    // If remaining n > 1, it becomes the k-th factor
    if (n > 1) {
        factors.push_back(n);
    }

    // If we couldn't get exactly k factors, it's impossible
    if (factors.size() < k) {
        cout << -1 << "\n";
    } else {
        for (int i = 0; i < k; ++i) {
            cout << factors[i] << (i == k - 1 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}