#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++) cin >> array[i];

    cin >> m;
    vector<int> array2(m);
    for (int i = 0; i < m; i++) cin >> array2[i];

    // Sort both so we can match greedily
    sort(array.begin(), array.end());
    sort(array2.begin(), array2.end());

    int i = 0; // Pointer for boys
    int j = 0; // Pointer for girls
    int count = 0;

    // Loop through until we run out of boys or girls
    while (i < n && j < m) {
        // If they can form a pair (difference is <= 1)
        if (abs(array[i] - array2[j]) <= 1) {
            count++;
            i++; // Move to next boy
            j++; // Move to next girl
        }
        // If the boy's skill is too small, he can't match this girl or any subsequent ones
        else if (array[i] < array2[j]) {
            i++;
        }
        // If the girl's skill is too small, move to the next girl
        else {
            j++;
        }
    }

    cout << count;
    return 0;
}