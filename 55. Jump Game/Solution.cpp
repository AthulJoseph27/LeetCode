class Solution {
public:
    bool canJump(vector<int>& nums) {
        int k=-1,cur_max = 0;
        bool can = nums[0] == 0 ? false : true;
        for(int i=0;i<nums.size();i++){
            if(nums[i]+i>=nums.size()-1) return true;
            if(!(can) && (nums[i]==0)) return false;
            if(can && (nums[i+nums[i]] == 0 && !(cur_max > i+nums[i]))){
                k = i+nums[i];
                can = false;
            }
            else if(!can && i+nums[i] > k){
                can = true;
            }
            if(can) cur_max = max(cur_max,nums[i]+i);
        }
        return true;
    }
};
