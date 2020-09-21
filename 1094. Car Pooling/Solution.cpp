class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
        vector<int>pass(1001,0);
        
        for(auto v:trips){
            pass[v[1]] += v[0];
            pass[v[2]] -= v[0];
        }
        
        int count = 0;
        
        for(int i:pass){
            count+=i;
            if(count > capacity) return false;
        }
        
        return true;
    }
};
