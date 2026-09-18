#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int MAXN = 100000;
vector<int> primes;

// Precompute primes using Sieve of Eratosthenes
void sieve() {
    vector<bool> is_prime(MAXN, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAXN; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAXN; j += i)
                is_prime[j] = false;
        }
    }
    for (int i = 2; i < MAXN; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
}

void solve() {
    int d;
    cin >> d;

    // Find first prime p1 >= 1 + d
    ll p1 = *lower_bound(primes.begin(), primes.end(), 1 + d);

    // Find second prime p2 >= p1 + d
    ll p2 = *lower_bound(primes.begin(), primes.end(), p1 + d);

    // Result is p1 * p2
    cout << p1 * p2 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve(); // Initialize primes once

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}