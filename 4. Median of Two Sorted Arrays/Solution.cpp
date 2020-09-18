class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>a(nums1.size()+nums2.size());
        int i=0,j=0,k=0;
        while(j<nums1.size() && k<nums2.size()){
            if(nums1[j]<=nums2[k]) a[i] = nums1[j++];
            else a[i] = nums2[k++];
            i++;
        }
        while(j<nums1.size()) a[i++] = nums1[j++];
        while(k<nums2.size()) a[i++] = nums2[k++];
        
        int n = a.size();
        
        if(n%2==0) return (double)(a[n/2]+a[n/2-1])/2;
        
        return a[n/2];
    }
};
