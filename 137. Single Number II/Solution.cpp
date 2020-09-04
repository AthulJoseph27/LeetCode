class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i:nums)
            mp[i]++;
        for(auto it=mp.begin();it!=mp.end();it++)
            if(it->second != 3) return it->first;
        
        return -1;
    }
};
