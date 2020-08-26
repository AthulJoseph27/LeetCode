class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};
        int start = INT_MAX, end = INT_MIN,s=0,n=nums.size()-1,mid,e=n;
        while(s<=e){
            mid = (s+e)/2;
           if(nums[mid]==target){
               start = min(start,mid);
               e = mid-1;
           }else{
            if(nums[mid] > target) e = mid-1;
            else s = mid+1;
           }
        }
        
        if(start == INT_MAX) return {-1,-1};
        e=n;
        while(s<=e){
            mid = (s+e)/2;
           if(nums[mid]==target){
               end = max(end,mid);
               s = mid+1;
           }
            if(nums[mid] > target) e = mid-1;
            else s = mid+1;
        }
        
        return {start,end};
    }
};
