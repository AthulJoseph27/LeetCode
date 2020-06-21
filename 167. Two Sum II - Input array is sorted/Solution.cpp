class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1,n;
        while(s<e){
            n = nums[s]+nums[e];
            if(n==target) return {s+1,e+1};
            if(n>target) e--;
            else s++;
        }
        return {};
    }
};
