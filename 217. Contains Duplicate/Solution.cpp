class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()<2) return false;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
            if(nums[i+1]==nums[i]) return true;
        return false;
        // unordered_set<int>s;
        // for(int i=0;i<nums.size();i++)
        //     s.insert(nums[i]);
        // if(nums.size()!=s.size()) return true;
        // return false;
    }
};
