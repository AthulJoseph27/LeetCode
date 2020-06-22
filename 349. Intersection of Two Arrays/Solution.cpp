class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s1;
        unordered_set<int>s2;
        vector<int>ans;
        for(int i:nums1)
            s1.insert(i);
        for(int i:nums2)
            s2.insert(i);
  
        if(s1.size()<s2.size()){
        for(auto n:s1){
            if(s2.count(n)) ans.push_back(n);
        }
        }else{
            for(auto n:s2){
            if(s1.count(n)) ans.push_back(n);
        }
        }
        
        return ans;
    }
};
