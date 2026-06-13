#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;

    vector<pair<int,int>> dragons;

    for (int i = 0; i < n; i++) {
        int asur, bonus;
        cin >> asur >> bonus;
        dragons.push_back({asur, bonus});
    }

    sort(dragons.begin(), dragons.end());

    for (auto d : dragons) {
        int asur = d.first;
        int bonus = d.second;

        if (s > asur) {
            s += bonus;
        } else {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
}