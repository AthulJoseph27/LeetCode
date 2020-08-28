class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        const int inf = 1e9+5;
        vector<int>dp(amount+1,inf);
        
        dp[0] = 0;
        
        for(int c:coins)
            for(int i=0;i<=amount;i++)
                if(i >= c) dp[i] = min(dp[i-c]+1,dp[i]);
        
        if(dp[amount]==inf) return -1;
        return dp[amount];
    }
};
