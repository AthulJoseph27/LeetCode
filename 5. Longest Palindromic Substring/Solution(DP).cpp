class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() < 2)
            return s;
        vector<vector<bool>> dp(s.size(),vector<bool>(s.size(),false));
        
        for(int i=0;i<s.size();i++)
            dp[i][i] = true;
        
        for(int i=0;i<s.size()-1;i++)
            dp[i+1][i] = (s[i]==s[i+1]);
        
        
        string result = s.substr(0,1);
        for(int i=s.size()-1;i>=0;i--){
            for(int j=i+1;j<s.size();j++)
                if(s[i] == s[j]){
                    if(dp[i+1][j-1]){
                        dp[i][j] = true;
                        int len = j-i+1;
                        if(len > result.size())
                            result = s.substr(i,len);
                    }
                }
        }
        
        return result;
    }
};
