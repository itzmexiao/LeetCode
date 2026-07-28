class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<int> dp(amount + 1, INT_MAX);
        dp[0] = 0;
        for (int i = 0; i < n; i++)
        {
            for (int currAmount = coins[i]; currAmount <= amount; currAmount++)
            {
                if (dp[currAmount - coins[i]] != INT_MAX)
                {
                    dp[currAmount] = min(dp[currAmount],
                                         1 + dp[currAmount - coins[i]]);
                }
            }
        }
        return dp[amount] == INT_MAX ? -1 : dp[amount];
    }
};