class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<long>dp = {0,0};
        cost.push_back(0);
        for(int i=2;i<cost.size();i++)
            dp.push_back(min(dp[i-1]+min(cost[i-1],cost[i-2]),dp[i-2]+cost[i-2]));
        
        return dp[dp.size()-1];
    }
};
