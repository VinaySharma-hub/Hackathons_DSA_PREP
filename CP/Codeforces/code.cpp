#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x; // we read ai but it doesn't affect the answer
        }

        cout << n << "\n";
    }

    return 0;
}