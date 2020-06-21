class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int sum=0,a=0;
        for(int i=0;i<nums.size();i++){
            a += nums[i];
            a=max(a,0);
            sum=max(sum,a);
        }
        if(sum==0){
            for(int i=0;i<nums.size();i++)
                if(nums[i]==0) return 0;
            
            return *max_element(nums.begin(),nums.end());
        }
        return sum;
    }
};
