class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // sort(nums1.begin(),nums1.end());
        if(nums2.size()==0||nums1.size()==0) return {};
        sort(nums2.begin(),nums2.end());
        vector<int>ans;
        auto bns = [&](int n){
            int s=0,e=nums2.size()-1,mid;
            while(s<=e){
                mid=(s+e)/2;
                if(nums2[mid]==n){
                    nums2.erase(nums2.begin()+mid);
                    ans.push_back(n);
                    return;
                }
                if(nums2[mid]>n)e=mid-1;
                else s=mid+1;
            }
        };
        for(int i:nums1)
            bns(i);
          
        return ans;
        // for(int i:nums1){
        //     for(int j=0;j<nums2.size();j++)
        //         if(i==nums2[j]){
        //             ans.push_back(i);
        //             nums2.erase(nums2.begin()+j);
        //             break;
        //         }
        // }
        // return ans;
    }
};
