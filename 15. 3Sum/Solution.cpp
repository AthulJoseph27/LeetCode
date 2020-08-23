class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3) return{};
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n = nums.size()-1;
        auto bns = [&](int s){
            int e = n,sum,target = nums[s];
            s++;
           while(s<e){
               sum = nums[s]+nums[e]+target;
               if(sum==0 && nums[s] >= target){
                   ans.push_back({target,nums[s],nums[e]});
                   s++;
                   while(s<=e && nums[s]==nums[s-1]) 
                       s++;
                   e--;
               }else if(sum > 0) e--;
               else s++;
           }
        };
        int a;
        for(int i=0;i<=n-2;i++){
            if(i>0&&nums[i-1]==nums[i]) continue;
            bns(i);
        }
        return ans;
    }
};
