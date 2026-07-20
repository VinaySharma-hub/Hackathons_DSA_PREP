#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    set<char> unique_letters;
    for (int i = 0; i < n; i++) {
        char ch;
        cin >> ch;
        // Convert to lowercase and insert into the set if it's a letter
        unique_letters.insert(tolower(ch));
    }
    
    // If the set has 26 elements, it means every letter from a-z appeared at least once
    if (unique_letters.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}