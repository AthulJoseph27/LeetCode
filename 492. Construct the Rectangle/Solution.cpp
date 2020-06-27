class Solution {
public:
    vector<int> constructRectangle(int area) {
        int i=sqrt(area);
        while(area%i!=0) i--;
        vector<int>ans={i,area/i};
        sort(ans.begin(),ans.end(),greater<int>());
        return ans;
    }
};
