class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mn = *min_element(nums.begin(),nums.end());
        int ans=0;
        for(int i:nums)
            ans+= (i-mn);
        
        return ans;
    }
};
