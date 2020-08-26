class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int minValue = 1;
        sort(nums.begin(),nums.end());
        for(int i:nums)
            if(i==minValue) minValue++;
        
        return minValue;
    }
};
