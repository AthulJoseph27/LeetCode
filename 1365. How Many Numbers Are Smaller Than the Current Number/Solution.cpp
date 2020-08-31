class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        int mp[101]={0};
        
        for(int i:nums) mp[i]++;
        
        for(int i=1;i<101;i++)
            mp[i]+=mp[i-1];
        
        vector<int>ans={};
        
        for(int i:nums)
            i == 0 ? ans.push_back(0) : ans.push_back(mp[i-1]);
        
       return ans; 
    }
};
