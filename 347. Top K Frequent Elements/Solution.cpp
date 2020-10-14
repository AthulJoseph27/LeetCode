class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i:nums)
            mp[i]++;
        nums.clear();
        
        for(auto it = mp.begin();it!=mp.end();it++)
            nums.push_back(it->first);
        
        sort(nums.begin(),nums.end(),[&](int a, int b){
            return mp[a] > mp[b];
        });
        
        vector<int>ans={};
        for(int i:nums)
            if(k == 0) break;
            else{
                ans.push_back(i);
                k--;
            }
        
        return ans;
        
    }
};
