class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        int n=nums.size();
        n/=2;
        for(auto it=mp.begin();it!=mp.end();it++)
            if(it->second>n) return it->first;
        return -1;
    }
};
