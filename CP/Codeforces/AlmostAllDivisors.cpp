#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    while (n)
    {
        int k;
        cin >> k;
        vector<int> array(k);
        for (int i = 0; i < k; i++)
        {
            cin >> array[i];
        }
        
        sort(array.begin(), array.end());
        
        // 1. Calculate the candidate answer x
        int x = array[0] * array[k - 1];
        
        // 2. Find ALL actual mathematical proper divisors of x
        vector<int> real_divisors;
        for (int i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                real_divisors.push_back(i);
                if (i * i != x)
                {
                    real_divisors.push_back(x / i);
                }
            }
        }
        
        // 3. Sort them so we can directly compare with the input array
        sort(real_divisors.begin(), real_divisors.end());
        
        // 4. Verify if the generated list matches the input list exactly
        if (array == real_divisors)
        {
            cout << x << "\n"; // Valid answer found
        }
        else
        {
            cout << -1 << "\n"; // Contradictory input data
        }
        
        n--;
    }
}