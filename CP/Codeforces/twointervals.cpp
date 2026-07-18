#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int l1;
    cin >> l1;
    int r1;
    cin >> r1;
    int l2;
    cin >> l2;
    int r2;
    cin >> r2;
    int bro1;
    if (l1 > l2)
    {
        bro1 = l1;
    }
    else
        bro1 = l2;
    int bro2;
    if (r2 < r1)
    {
        bro2 = r2;
    }
    else
        bro2 = r1;
    if (bro2 - bro1 > 1)
        cout << bro1 << " " << bro2;
    else
        cout << -1;
}