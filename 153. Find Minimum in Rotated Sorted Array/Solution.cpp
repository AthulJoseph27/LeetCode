class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums[0] < nums.back()) return nums[0];
        int s = 0, e = nums.size()-1,mid;
        if(e==0) return nums[0];
        while(s<=e){
            mid = (s+e)/2;
            if(nums[mid] > nums[mid+1]) return nums[mid+1];
            if(nums[mid-1] > nums[mid]) return nums[mid];
            if(nums[mid] < nums[0]) e = mid-1;
            else s=mid+1;
        }
        return -1;
    }
};
