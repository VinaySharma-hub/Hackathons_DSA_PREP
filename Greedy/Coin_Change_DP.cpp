#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dp;

    int solve(int amount, vector<int>& coins) {
        if (amount == 0) return 0;
        if (amount < 0) return 1e9;
        if (dp[amount] != -1)
            return dp[amount];
        int ans = 1e9;
        for (int coin : coins) {
            ans = min(ans, 1 + solve(amount - coin, coins));
        }
        return dp[amount] = ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        dp.assign(amount + 1, -1);

        int res = solve(amount, coins);
        return (res >= 1e9) ? -1 : res;
    }
};

int main() {
    int n;
    cout << "Enter number of coins: ";
    cin >> n;

    vector<int> coins(n);
    cout << "Enter coin values:\n";
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    int amount;
    cout << "Enter amount: ";
    cin >> amount;

    Solution obj;
    int result = obj.coinChange(coins, amount);

    if (result == -1)
        cout << "Not possible to make the amount\n";
    else
        cout << "Minimum number of coins = " << result << endl;

    return 0;
}
