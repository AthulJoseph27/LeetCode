class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        if(nums.size()==0) return {};
        if(nums.size()==1) return {"Gold Medal"};
        if(nums.size()==2){
            if(nums[0]>nums[1]) return {"Gold Medal","Silver Medal"};
            else return {"Silver Medal","Gold Medal"};
        }
        unordered_map<int,string>mp;
        vector<int>tmp=nums;
        sort(tmp.begin(),tmp.end(),greater<int>());
        mp[tmp[0]] = "Gold Medal";
        mp[tmp[1]] = "Silver Medal";
        mp[tmp[2]] = "Bronze Medal";
        for(int i=3;i<tmp.size();i++)
            mp[tmp[i]] = to_string(i+1);
        
        vector<string>ans;
        for(int i:nums)
            ans.push_back(mp[i]);
        
        return ans;
    }
};
