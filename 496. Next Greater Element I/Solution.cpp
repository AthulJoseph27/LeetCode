class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int f=0,ind;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++)
                if(nums2[j]==nums1[i]){
                    ind = j+1;
                    break;
                }
            f=0;
            for(int j=ind;j<nums2.size();j++)
                if(nums2[j]>nums1[i]){
                    f++;
                    ans.push_back(nums2[j]);
                    break;
                }
            if(f==0) ans.push_back(-1);
        }
        return ans;
    }
};
