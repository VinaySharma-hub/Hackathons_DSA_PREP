#include <iostream>
#include <string>
#include <stack>

using namespace std;

void solve() {
    int l;
    cin >> l;
    string s;
    cin >> s;

    stack<char> st;
    int moves = 0;

    for (int i = 0; i < l; i++) {
        if (s[i] == '(') {
            // Always push opening brackets onto the stack
            st.push(s[i]);
        } else {
            // If it's a closing bracket ')', check if we can pair it up
            if (!st.empty() && st.top() == '(') {
                st.pop(); // Successfully matched a pair ()
            } else {
                moves++; // No matching '(' found, this ')' must be moved!
            }
        }
    }
    
    cout << moves << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}