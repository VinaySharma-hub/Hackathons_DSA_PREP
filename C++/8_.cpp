#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 3, 4, 5, 7, 4, 3, 6, 7};
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    mt19937 rng(random_device{}());
    shuffle(v.begin(), v.end(), rng);
    sort(v.begin(), v.end());
    return 0;
}