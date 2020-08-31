class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int mp[2001] = {0};
        
        for(int i:arr) mp[i]++;
        
        for(int i=1;i<2001;i++){
            if(mp[i]==0)k--;
            if(k==0) return i;
        }
        
        return -1;
    }
};

