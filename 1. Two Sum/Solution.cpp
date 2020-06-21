class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>temp=nums;
        sort(nums.begin(),nums.end());
        int s=0,e=nums.size()-1,n;
        vector<int>val;
        vector<int>ans={-1,-1};
        while(s<e){
            n=nums[s]+nums[e];
            if(n==target){
                val = {nums[s],nums[e]};
                break;
            }else if(n>target) e--;
            else s++;
        }
        for(int i=0;i<nums.size();i++){
            if(ans[0]!=-1&&ans[1]!=-1) return ans;
            if(ans[0]==-1&&temp[i]==val[0])ans[0]=i;
            else if(ans[1]==-1&&temp[i]==val[1])ans[1]=i;
        }
        return ans;
    }
};
