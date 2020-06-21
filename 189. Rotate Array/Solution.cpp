class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k=k%size;
        vector<int>tmp={};
        for(int i=size-1;i>size-k-1;i--){
            tmp.push_back(nums[i]);
        }
        for(int i:tmp)
        nums.insert(nums.begin(),i);
        nums.resize(size);
    }
};
