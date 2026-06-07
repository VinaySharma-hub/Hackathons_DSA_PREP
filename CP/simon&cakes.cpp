#include <iostream>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    long long k = 1;
    long long temp = n;
    
    // Loop up to sqrt(n) to find prime factors
    for (long long i = 2; i * i <= temp; i++) {
        if (temp % i == 0) {
            k *= i; // Include this unique prime factor once
            
            // Divide out all duplicates of this prime factor
            while (temp % i == 0) {
                temp /= i;
            }
        }
    }
    
    // If temp > 1, the remaining part is itself a prime factor
    if (temp > 1) {
        k *= temp;
    }
    
    cout << k << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}