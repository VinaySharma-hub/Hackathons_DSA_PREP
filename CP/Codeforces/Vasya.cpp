#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int c = min(a, b);
    int extra = (a - c + b - c) / 2;
    cout << c <<endl;
    cout<<extra;

    return 0;
}
