#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);

    unordered_set<char> unique_letters;

    // Iterate through the input string and collect lowercase English letters
    for (char ch : s) {
        if (ch >= 'a' && ch <= 'z') {
            unique_letters.insert(ch);
        }
    }

    // Print the number of distinct letters found
    cout << unique_letters.size() << "\n";

    return 0;
}