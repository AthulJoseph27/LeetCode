class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size()/2,N=matrix.size();
        vector<int>tmp;
        int lvl = 0;
        
        while(lvl<n){
            tmp.clear();
            for(int i=lvl;i<N-lvl;i++)
                tmp.push_back(matrix[lvl][i]);
            for(int i=N-lvl-1;i>=lvl;i--)
                matrix[lvl][i]=matrix[N-1-i][lvl];
            for(int i=lvl+1;i<N-lvl;i++)
                matrix[i][lvl]=matrix[N-lvl-1][i];
            for(int i=lvl+1;i<N-lvl-1;i++)
                matrix[N-lvl-1][i]=matrix[N-1-i][N-lvl-1];
            for(int i=N-lvl-1,j=tmp.size()-1;i>lvl;i--,j--)
                matrix[i][N-lvl-1] = tmp[j];
            
            lvl++;
        }
        
    }
};
