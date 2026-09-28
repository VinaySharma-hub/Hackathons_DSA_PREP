#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int i = 0, j = n - 1;
    int sereja = 0, dima = 0;
    int turn = 0; // 0 for Sereja, 1 for Dima

    while (i <= j) {
        int picked;
        if (array[i] > array[j]) {
            picked = array[i];
            i++;
        } else {
            picked = array[j];
            j--;
        }

        if (turn % 2 == 0) {
            sereja += picked;
        } else {
            dima += picked;
        }

        turn++;
    }

    cout << sereja << " " << dima << "\n";
    return 0;
}