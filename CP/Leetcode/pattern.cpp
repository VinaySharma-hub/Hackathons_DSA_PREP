#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int m = 9;
    int spaces = 0; // Track the number of leading spaces

    while (n) {
        // Print the required leading spaces
        for (int i = 0; i < spaces; i++) {
            cout << " ";
        }
        
        // Print the stars
        for (int i = 0; i < m; i++) {
            cout << "*";
        }
        
        cout << endl;
        
        m -= 2;      // Reduce stars by 2 for the next row
        spaces += 1; // Increase spaces by 1 for the next row
        n -= 1;      // Move to the next row
    }
    
    return 0;
}