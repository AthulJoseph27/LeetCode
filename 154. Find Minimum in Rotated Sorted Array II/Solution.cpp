class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums[0] < nums.back()) return nums[0];
        int s = 0, e = nums.size()-1,mid;
        if(e==0) return nums[0];
        while(s<=e){
            mid = (s+e)/2;
           if(nums[mid] > nums[e]) s = mid+1;
           else if(nums[mid] < nums[e]) e = mid;
           else e--;
        }
        return nums[mid];
    }
};
