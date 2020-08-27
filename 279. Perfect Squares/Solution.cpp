class Solution {
public:
    int numSquares(int n) {
        const int inf = 1e9+5;
        int N = sqrt(n);
        N++;
        n++;
        int tmp;
        vector<int>dp(n);
        for(int i=0;i<n;i++)
            dp[i] = i;
        for(int i=1;i<N;i++)
            for(int j=2;j<n;j++){
                tmp = i*i;
                dp[j] =  tmp%j==0 ? min(tmp/j,dp[j]) :tmp < j ? min(dp[j-i*i]+1,dp[j]) :  dp[j];
            }
       
        return dp[n-1];
                
    }
};
