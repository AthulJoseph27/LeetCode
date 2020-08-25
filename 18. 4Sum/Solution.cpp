class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int a,b,n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        auto bns = [&](int j,int k){
          int sum = nums[j]+nums[k],s = k+1,e = n-1,tmp;
            while(s<e){
                tmp = sum+nums[s]+nums[e];
                if(tmp==target){
                    ans.push_back({nums[j],nums[k],nums[s],nums[e]});
                    s++;
                    while(s<=e && nums[s]==nums[s-1]) s++;
                    e--;
                }else if(tmp > target) e--;
                else s++;
            }
        };
        for(a=0;a<n;a++){
            if(a>0 && nums[a]==nums[a-1]) continue;
            for(b=a+1;b<n;b++){
                if(b > a+1 && nums[b]==nums[b-1]) continue;
                bns(a,b);
            }
        }
        return ans;
    }
};
