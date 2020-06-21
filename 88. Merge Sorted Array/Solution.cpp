class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(m);
        for(int i=0;i<nums2.size();i++)
            nums1.push_back(nums2[i]);//O(n)
        sort(nums1.begin(),nums1.end());//O(m+nlog(m+n))
        
        // auto bns = [&](int n){
        //     int s=0,e=m-1,mid;
        //     while(s<e){
        //         mid = (s+e)/2;
        //         if(n>nums1[mid])
        //             s=mid+1;
        //         else
        //             e=mid;
        //     }
        //     int tmp = nums1[mid];
        //     nums1[mid]=n;
        //     nums1[mid+m]=tmp;
        // };
        ////O(nmlog(m))
        // for(int i=0;i<nums2.size();i++)//O(n)
        //     bns(nums2[i]);//O(mlog(m))
        
    }
};
