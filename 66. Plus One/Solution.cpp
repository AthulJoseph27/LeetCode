class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        if(nums[nums.size()-1]!=9){
            nums[nums.size()-1]++;
            return nums;
        }
        nums[nums.size()-1]=0;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]!=9){
                nums[i]++;
                return nums;
            }else nums[i]=0;
        }
        nums.insert(nums.begin(),1);
        return nums;
    }
};
