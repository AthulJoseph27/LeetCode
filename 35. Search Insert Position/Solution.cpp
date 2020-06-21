class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1,mid;
        while(s<e){
            mid = (s+e)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]>target)e=mid-1;
            else s=mid+1;
        }
        if(nums[s]<target) return s+1;
        return s;
    }
};
