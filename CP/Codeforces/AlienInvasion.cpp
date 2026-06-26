#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> array1(n), array2(n);
    for(int i = 0; i < n; i++) cin >> array1[i];
    for(int i = 0; i < n; i++) cin >> array2[i];

    // compute arrival times as double
    vector<double> time(n);
    for(int i = 0; i < n; i++) {
        time[i] = (double)array1[i] / array2[i];
    }

    sort(time.begin(), time.end());

    int destroyed = 0;
    for(int minute = 1; minute <= n; minute++) {
        if(time[destroyed] < minute) break; // ship arrives too early
        destroyed++;
    }

    cout << destroyed << endl;
    return 0;
}
