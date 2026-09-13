#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second

void solve() {
    int a;
    cin >> a;
    vector<int> v;
    int multiplier = 1;
    
    while (a > 0) {
        int temp = a % 10;
        if (temp != 0) {
            v.pb(temp * multiplier);
        }
        multiplier *= 10;
        a /= 10;
    }
    
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}