class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // Without using division and O(N)
        int n = nums.size();
        
        vector<int>pref(n+1,1);
        vector<int>suf(n+1,1);
        
        for(int i=0;i<n;i++){
            suf[i+1] = suf[i]*nums[n-i-1];
            pref[i+1] = pref[i]*nums[i];
        }
        
        for(int i=0;i<n;i++)
            nums[i] = (suf[n-i-1]*pref[i]);
       
        return nums;
    }
};
