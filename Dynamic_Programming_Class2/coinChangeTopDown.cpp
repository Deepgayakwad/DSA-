class Solution {
    int solveByMemo(vector<int>& coins, int amount, vector<int>& dp) {
        // Base case
        if (amount == 0) return 0;
        if (amount < 0) return INT_MAX;

        // Check memoization
        if (dp[amount] != -1) return dp[amount];

        int mini = INT_MAX;
        for (int i = 0; i < coins.size(); i++) {
            int result = solveByMemo(coins, amount - coins[i], dp);
            if (result != INT_MAX) {
                mini = min(mini, 1 + result);
            }
        }

        // Memoize and return the result
        dp[amount] = mini;
        return dp[amount];
    }

public:
    int coinChange(vector<int>& coins, int amount) {
        // Edge case: amount == 0
        if (amount == 0) return 0;

        // Step 1: Create dp array
        vector<int> dp(amount + 1, -1);

        // Compute result using memoization
        int ans = solveByMemo(coins, amount, dp);

        return (ans == INT_MAX) ? -1 : ans;
    }
};
