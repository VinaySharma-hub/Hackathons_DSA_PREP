#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int count = 0;

    // Use division instead of subtracting inside a loop
    count += n / 100;
    n %= 100;

    count += n / 20;
    n %= 20;

    count += n / 10;
    n %= 10;

    count += n / 5;
    n %= 5;

    count += n; // Remaining 1s

    cout << count << "\n";

    return 0;
}