#include <iostream>
using namespace std;

int main() {
    
    int n, m;
    cin >> n >> m;
    int minMoves = (n + 1) / 2;
    int k = ((minMoves + m - 1) / m) * m;
    if (k <= n)
        cout << k;
    else
        cout << -1;
    return 0;

}
