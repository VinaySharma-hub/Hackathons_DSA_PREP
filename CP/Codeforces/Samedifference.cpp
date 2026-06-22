#include <iostream>
#include <vector>
#include <map>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    map<int, int> freq_map;
    long long total_pairs = 0;

    for (int i = 1; i <= n; ++i)
    {
        int val;
        cin >> val;

        // Transformed value: a_i - i
        int transformed = val - i;

        // If this transformed value appeared before, it forms pairs
        if (freq_map.find(transformed) != freq_map.end())
        {
            total_pairs += freq_map[transformed];
        }

        // Increment the frequency of this value
        freq_map[transformed]++;
    }

    cout << total_pairs << "\n";
}

int main()
{
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}