#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int counts = 0;
    while (n > 0)
    {
        int bro;
        cin >> bro;
        if (sum == 0 && bro == -1)
        {
            counts++;
        }
        else if (sum > 0 && bro == -1)
        {
            sum = sum + bro;
        }
        else if (bro > 0)
        {
            sum = sum + bro;
        }
        n = n - 1;
    }
    cout << counts;
}