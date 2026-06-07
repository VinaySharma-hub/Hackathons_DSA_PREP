#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a)
            cin >> x;

        vector<int> ops;
        int flip = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            long long cur = (flip % 2 == 0) ? a[i] : -a[i];
            if (cur > 0)
            {
                ops.push_back(i + 1);
                flip++;
            }
        }

        cout << ops.size() << "\n";
        for (int i = 0; i < (int)ops.size(); i++)
        {
            cout << ops[i];
            if (i + 1 < (int)ops.size())
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}