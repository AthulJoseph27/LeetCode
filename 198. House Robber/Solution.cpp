class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        vector<int>total={nums[0],max(nums[0],nums[1])};
        for(int i=2;i<nums.size();i++)
            total.push_back(max(total[i-2]+nums[i],total[i-1]));
        
        return total[total.size()-1];
    }
};
