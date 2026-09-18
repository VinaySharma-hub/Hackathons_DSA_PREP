#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b, total;
    cin >> a >> b >> total;

    string combined = a + b;

    unordered_map<char, int> mp1, mp2;

    for (char c : combined) mp1[c]++;
    for (char c : total)    mp2[c]++;

    if (mp1 == mp2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}