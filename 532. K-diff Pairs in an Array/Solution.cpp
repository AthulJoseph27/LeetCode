class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        // if(nums.size()==0) return 0;
        if(nums.size()<=1) return 0;
        sort(nums.begin(),nums.end());
        set<int>st;
        int mx = nums[nums.size()-1];
        int c=0,e = nums.size()-1;
        auto bns = [&](int n,int s){
            int mid;
            e = nums.size()-1;
            while(s<=e){
                mid = s+(e-s)/2;
                if(nums[mid]==n) return true;
                if(nums[mid]>n)e = mid-1;
                else s = mid+1;
            }
            return false;
        };
        for(int i=0;i<nums.size();i++){
            if(nums[i]+k>mx) break;
            if(bns(nums[i]+k,i+1)){
                st.insert(nums[i]);
            }
                
        }
    
        return st.size();
    }
};
