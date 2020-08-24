class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int close=INT_MAX,n=nums.size(),ans = INT_MAX;
        sort(nums.begin(),nums.end());
        auto bns = [&](int i){
            int sum,s=i+1,e=n-1,tmp;
            while(s<e){
                sum = nums[i]+nums[s]+nums[e];
                if(sum==target){
                    close = 0;
                    ans = sum;
                    return 0;
                }else if(sum > target) e--;
                else s++;
                
                tmp = abs(sum-target);
                if(tmp < close){
                    close = tmp;
                    ans = sum;
                }
            }
            return -1;
        };
        for(int i=0;i<n;i++)
            if(bns(i)==0) break;
        
        return ans;
    }
};
