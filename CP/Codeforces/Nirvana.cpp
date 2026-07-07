#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll digitProduct(ll x) {
    if (x == 0) return 0;

    ll product = 1;
    while (x > 0) {
        product *= x % 10;
        x /= 10;
    }
    return product;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll n;
    cin >> n;
    
    n++;

    ll ans = 0;
    ll p = 1;

    while (n > 0) {
        ans = max(ans, digitProduct(n * p - 1));
        n /= 10;
        p *= 10;
    }

    cout << ans << '\n';
    

}