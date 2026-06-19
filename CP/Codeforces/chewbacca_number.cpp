#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n; // Changed to long long to avoid overflow
    cin >> n;
    vector<int> array;
    
    if (n == 9)
    {
        cout << 9;
        return 0; // Exit early
    }
    else
    {
        while (n > 0)
        {
            int a = n % 10;
            array.push_back(a);
            n = n / 10;
        }
        
        reverse(array.begin(), array.end());
        int l = array.size(); // Declared here
        
        for (int i = 0; i < l; i++)
        {
            int inverted = 9 - array[i];
            
            if (i == 0) // Special rule for the very first digit
            {
                // Invert only if it doesn't make the leading digit 0
                if (inverted < array[i] && inverted != 0) {
                    array[i] = inverted;
                }
            }
            else // For all other digits
            {
                if (inverted < array[i]) {
                    array[i] = inverted;
                }
            }
        }
    }
    
    // Removed the duplicate 'int l' declaration
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i];
    }
    return 0;
}