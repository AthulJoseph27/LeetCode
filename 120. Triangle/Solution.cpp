class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        if(triangle.size() == 0)
            return 0;
        
        if(triangle.size() == 1)
            return triangle[0][0];
        
        vector<vector<int>> dp = {{0}};
        for(int i=1;i<triangle.size();i++){
            dp.push_back({});
            for(int j=0;j<triangle[i].size();j++)
                dp[dp.size()-1].push_back(0);
        }
        
        dp[0][0] = triangle[0][0];
        
        for(int i=1;i<triangle.size();i++)
            for(int j=0;j<triangle[i].size();j++){
                
                int a,b;
                b = a = 1e5;
                if(j != 0)
                    a = dp[i-1][j-1];
                if(j < dp[i-1].size())
                    b = dp[i-1][j];
                
                dp[i][j] = min({a,b}) + triangle[i][j];
                
            }
    
        int mn = dp[dp.size()-1][0];
        for(int i:dp[dp.size()-1])
            mn = min(mn,i);
        
        return mn;
    }
};
