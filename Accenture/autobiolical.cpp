#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second

int check(int bro) {
    vector<int> v;
    int freq[10] = {};

    while (bro > 0) {
        int digit = bro % 10;
        freq[digit]++;
        v.push_back(digit);
        bro /= 10;
    }

    reverse(all(v));

    for (int i = 0; i < v.size(); i++) {
        if (freq[i] != v[i]) {
            return 0;
        }
    }

    return v.size()-1;
}

signed main() {
    string s = "1210";

    int bro = check(stoi(s));

    cout << bro << endl;
}