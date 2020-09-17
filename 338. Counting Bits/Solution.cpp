class Solution {
public:
    vector<int> countBits(int num) {
        if(num == 0) return {0};
        if(num == 1) return {0,1};
        vector<int>dp = {0,1,1};
        int prev_pow = 2;
        for(int i=3;i<=num;i++){
            if(i==prev_pow*2){
                prev_pow = i;
                dp.push_back(1);
                continue;
            }
            if(i%2!=0) dp.push_back(dp.back()+1);
            else dp.push_back(dp[i%prev_pow]+1);
        }
        return dp;
    }
};
