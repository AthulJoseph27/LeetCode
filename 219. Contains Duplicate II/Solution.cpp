class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i:nums)
            mp[i]=-1;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]!=-1){
                if(i-mp[nums[i]]<=k) return true;
            }
            mp[nums[i]]=i;
        }
    return false;
    }
};
