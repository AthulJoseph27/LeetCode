class Solution {
public:
    int thirdMax(vector<int>& nums) {
        //         set<int>s;
//         for(int i:nums)
//             s.insert(i);
    
        
//         vector<int>v;
//         v.assign(s.begin(),s.end());
//         if(v.size()<3) return v[v.size()-1];
//         return v[v.size()-3];
        unordered_set<int>s;
        for(int i:nums)
            s.insert(i);
        nums.assign(s.begin(),s.end());
        int mx=*max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
            if(nums[i]==mx){
                nums.erase(nums.begin()+i);
                i--;
            }
        if(nums.size()<2) return mx;
        mx=*max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
            if(nums[i]==mx){
                nums.erase(nums.begin()+i);
                i--;
            }
        if(nums.size()<1) return mx;
        return *max_element(nums.begin(),nums.end());
    }
};
