#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int MAX = 1000000;
vector<bool> is_prime(MAX + 1, true);

void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= MAX; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve(); // Precompute primes up to 10^6

    int t;
    cin >> t;
    while (t--) {
        long long n; // Make sure to use long long for n up to 10^12
        cin >> n;

        long long sq = round(sqrt(n));
        if (sq * sq == n && is_prime[sq]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}