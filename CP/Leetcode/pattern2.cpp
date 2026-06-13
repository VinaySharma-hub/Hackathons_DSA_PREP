#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n; // Input number (outermost value)
    cin >> n;

    // Size of matrix = 2*n - 1
    // Example:
    // n = 4
    // size = 7
    int size = 2 * n - 1;

    // Traverse every row
    for (int i = 0; i < size; i++)
    {

        // Traverse every column
        for (int j = 0; j < size; j++)
        {

            // Distance from top boundary
            // Row index itself tells how far we are from top
            int top = i;

            // Distance from left boundary
            // Column index itself tells how far we are from left
            int left = j;

            // Distance from bottom boundary
            // Last row index = size-1
            int bottom = size - 1 - i;

            // Distance from right boundary
            // Last column index = size-1
            int right = size - 1 - j;

            // Smallest distance from any boundary
            // Determines which layer/ring the cell belongs to
            int layer = min({top, left, bottom, right});

            // Outer layer -> value n
            // Next layer -> n-1
            // Next layer -> n-2
            // ...
            int value = n - layer;

            // Print value of current cell
            cout << value << " ";
        }

        // Move to next row
        cout << endl;
    }

    return 0;
}