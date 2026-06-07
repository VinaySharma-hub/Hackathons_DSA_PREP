#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        // Check if the word is "Yes" in any case combination
        if ((s[0] == 'Y' || s[0] == 'y') &&
            (s[1] == 'E' || s[1] == 'e') &&
            (s[2] == 'S' || s[2] == 's')) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
return 0;
   
}
