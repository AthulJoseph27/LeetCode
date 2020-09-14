class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==0) return nums[0];
        int ans = nums[0],max_pd = nums[0],min_pd=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0) swap(max_pd,min_pd);
            min_pd = min({nums[i],min_pd*nums[i]});
            max_pd = max({nums[i],max_pd*nums[i]});
            ans = max(ans,max_pd);
        }
        return ans;
    }
};
