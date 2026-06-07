#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long sum = 0;
    int l = n;
    while(l--) {
        int x;
        cin >> x;
        sum += x;
    }
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    double bro = static_cast<double>(sum) / (n);
    cout << fixed << setprecision(6) << bro << endl;
    return 0;
}
