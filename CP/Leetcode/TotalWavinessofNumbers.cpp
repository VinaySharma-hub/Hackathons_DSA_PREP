#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1;
    int num2;
    cin >> num1 ;
    cin>> num2;
    
    int totalwaviness = 0;
    for (int i = num1; i <= num2; i++)
    {
        string s = to_string(i);
        if (s.length() < 3)
        {
            continue;
        }
        for (int j = 1; j < s.length() - 1; ++j)
        {
            if (s[j] > s[j - 1] && s[j] > s[j + 1])
            {
                totalwaviness += 1;
            }
            else if (s[j] < s[j - 1] && s[j] < s[j + 1])
            {
                totalwaviness += 1;
            }
        }
    }
    cout<<totalwaviness;
}