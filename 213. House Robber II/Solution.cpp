class Solution {
    
    int maximize(vector<int>nums){
        
        nums.insert(nums.begin(),0);
        nums.insert(nums.begin(),0);
        int n = nums.size();
        
        for(int i=2;i<n;i++)
            nums[i] = max(nums[i-2]+nums[i],nums[i-1]);
        
        return nums[n-1];
        
    }
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        
        int tmp = nums[0],a;
        nums.erase(nums.begin());
        a = maximize(nums);
        nums.insert(nums.begin(),tmp);
        nums.pop_back();

        return max(maximize(nums),a);
        
    }
};
