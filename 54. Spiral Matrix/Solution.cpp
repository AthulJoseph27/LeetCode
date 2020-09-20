class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.size()==0) return {};
        if(matrix.size()<2) return matrix[0];
       int m = matrix.size(), n = matrix[0].size(),lvl=0;
        vector<int>ans={};
        while(ans.size()<n*m){

            for(int i=lvl;i<n-lvl;i++)
                ans.push_back(matrix[lvl][i]);
        
            for(int j=lvl+1;j<m-lvl;j++)
                ans.push_back(matrix[j][n-lvl-1]);
            
            for(int i=n-2-lvl;i>=lvl;i--)
                ans.push_back(matrix[m-lvl-1][i]);

            for(int j=m-lvl-2;j>lvl;j--)
                ans.push_back(matrix[j][lvl]);
            
            lvl++;

        }
        ans.resize(n*m);
        return ans;
    }
};
