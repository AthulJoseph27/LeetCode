class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {        
        unordered_map<int,int>mp;
        int n =nums.size()/3;
        vector<int>ans;
        for(int i:nums)
            mp[i]++;
        for(auto it=mp.begin();it!=mp.end();it++)
            if(it->second > n) ans.push_back(it->first);
        
        return ans;
    }
};
