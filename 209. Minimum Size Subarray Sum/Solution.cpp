class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int sum = 0,l=INT_MAX,lp=0,n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(sum - nums[lp] >= s){
                sum-=nums[lp];
                lp++;
            }
            if(sum>=s) l = min(l,i-lp+1);
        }
        if(l==INT_MAX) return 0;
        return l;
    }
};
