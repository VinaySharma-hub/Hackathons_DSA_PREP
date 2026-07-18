#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    // Create an answer vector to store who gave the gift to whom
    vector<int> ans(t + 1);
    
    for (int i = 1; i <= t; i++) {
        int target;
        cin >> target;
        // Friend i gave a gift to friend 'target'
        // Therefore, friend 'target' received a gift from friend i
        ans[target] = i;
    }
    
    for (int i = 1; i <= t; i++) {
        cout << ans[i] << (i == t ? "" : " ");
    }
    cout << endl;

    return 0;
}