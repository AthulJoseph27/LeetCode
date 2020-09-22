class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_map<int,int>mp;
        for(int i:candies)
            mp[i]++;
        return min(mp.size(),candies.size()/2);
    }
};
