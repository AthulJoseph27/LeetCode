class Solution {
public:
    vector<vector<int>> generate(int n) {
        if(n==0) return {};
        if(n==1) return {{1}};
        if(n==2) return {{1},{1,1}};
        vector<vector<int>>ans={{1},{1,1}};
        int j;
        vector<int>temp;
        for(int i=3;i<=n;i++){
            temp={1};
            for(j=1;j<i-1;j++)
                temp.push_back(ans[i-2][j]+ans[i-2][j-1]);
            temp.push_back(1);
            ans.push_back(temp);
        }
        return ans;
    }
};
