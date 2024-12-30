class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        // Step 1: Create a DP array and initialize it
        vector<int> dp(amount + 1, INT_MAX);
        dp[0] = 0; // Base case: 0 coins needed to form amount 0

        // Step 2: Build the DP table iteratively
        for (int i = 1; i <= amount; i++) {
            for (int coin : coins) {
                if (i - coin >= 0 && dp[i - coin] != INT_MAX) {
                    dp[i] = min(dp[i], 1 + dp[i - coin]);
                }
            }
        }

        // Step 3: Return the result
        return dp[amount] == INT_MAX ? -1 : dp[amount];
    }
};
