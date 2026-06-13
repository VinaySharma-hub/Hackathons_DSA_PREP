#include <bits/stdc++.h>
using namespace std;
int solve(int id, vector<int> &dp, vector<int> &heights)
{

    if (id == 0)
    {
        return 0;
    }
    int onejump = solve(id - 1, dp, heights) + abs(heights[id - 1] - heights[id]);
    int twojump;
    if (id > 1)
    {
        twojump = solve(id - 2, dp, heights) + abs(heights[id - 2] - heights[id]);
    }
    return min(onejump, twojump);
}
int frogjump(vector<int> &heights)
{
    if (heights.size() == 0)
    {
        return 0;
    }
    int n = heights.size();
    vector<int> dp(n + 1, -1);
    return solve(n - 1, dp, heights);
}
int main()
{
    // Greedy won't be useful in scuh problems bcs we can't guess at the moment whether the next step is benficial or not in additon\

    int n;
    cin >> n;

    vector<int> heights;
    for (int i = 0; i < n; i++)
    {
        int bro;
        cin >> bro;
        heights.push_back(bro);
    }
    int bro = frogjump(heights);
    cout << bro;
}