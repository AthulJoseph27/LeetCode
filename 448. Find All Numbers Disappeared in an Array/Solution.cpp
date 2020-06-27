class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>a(n+1,0);
        for(int i:nums)
            a[i]++;
        vector<int>ans;
        for(int i=1;i<=n;i++)
            if(a[i]==0) ans.push_back(i);
        
        return ans;
    }
};
