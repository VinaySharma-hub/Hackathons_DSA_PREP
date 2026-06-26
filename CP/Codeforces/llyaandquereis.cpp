#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.length();

    // pref[i] will store the number of valid pairs from index 0 up to index i-1
    vector<int> pref(n + 1, 0);

    for (int i = 1; i < n; i++)
    {
        pref[i + 1] = pref[i];
        if (s[i] == s[i - 1])
        {
            pref[i + 1]++;
        }
    }

    int m;
    cin >> m;
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        // The query is 1-indexed, matching our prefix array alignment
        cout << pref[r] - pref[l] << "\n";
    }

    return 0;
}