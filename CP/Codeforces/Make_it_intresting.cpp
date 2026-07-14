#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; 
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int ops = 0;
    // Iterate from the second-to-last element down to the first
    for(int i = n - 2; i >= 0; i--) {
        // Keep dividing until it's strictly less than the next element
        while(a[i] >= a[i + 1] && a[i] > 0) {
            a[i] /= 2;
            ops++;
        }
        
        // If they are still not strictly increasing, it means a[i+1] was 0 
        // and a[i] could not be reduced any further to be less than 0.
        if(a[i] >= a[i + 1]) {
            cout << -1 << endl;
            return;
        }
    }
    
    cout << ops << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; 
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}