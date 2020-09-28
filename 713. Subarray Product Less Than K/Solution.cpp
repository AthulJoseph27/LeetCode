class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        vector<int>dq={};
        int count=0,pd=1,si=-1,ei=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=k){
                si=-1;
                ei=-1;
                continue;
            }
            if(si==-1){
                si=i;
                ei=i;
            }else{
                ei++;
            }
            pd *= nums[i];
            while(pd>=k){
                pd/=nums[si];
                si++;
            }
            count+=(ei-si+1);
            
        }
        return count;
    }
};
