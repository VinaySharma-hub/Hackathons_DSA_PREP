#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(),(x).end()

// Checks if a number is prime
bool isPrime(ll n) {
    if (n < 2) return false;
    for (ll j = 2; j * j <= n; j++) {
        if (n % j == 0) return false;
    }
    return true;
}

void solve(){
    ll x;
    cin >> x;
    ll a, b;
    
    // Find the first prime 'a' >= x + 1
    for (ll i = x + 1;; i++){
        if (isPrime(i)) {
            a = i;
            break;
        }
    }
    
    // Find the second prime 'b' >= a + x
    for (ll i = a + x;; i++){
        if (isPrime(i)) {
            b = i;
            break;
        }
    }
    
    cout << a * b << endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    while(n--){
      solve();
    }
    return 0;
}