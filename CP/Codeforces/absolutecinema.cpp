#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while (n)
    {
        int k;
        cin >> k;
        vector<int> A(k);
        vector<int> B(k);
        
        int highest = 0;
        int index = 0;

        for (int i = 0; i < k; i++)
        {
            cin >> A[i];
            if (A[i] > highest) {
                highest = A[i];
                index = i;
            }
        }
        for (int i = 0; i < k; i++)
        {
            cin >> B[i];
            if (B[i] > highest) {
                highest = B[i];
                index = i; // Track if the true highest is actually in B
            }
        }

        long long sum = 0;
        for (int i = 0; i < k; i++)
        {
            if (i != index)
            {
                // Take the largest available value for B at all other positions
                sum += max(A[i], B[i]);
            }
            else 
            {
                // At the highest element's index, the OTHER element goes to B
                sum += min(A[i], B[i]);
            }
        }

        cout << (sum + highest) << "\n";
        n--;
    }
}