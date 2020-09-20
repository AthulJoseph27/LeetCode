class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int f=0;
        vector<int>y;
        for(int i=0;i<matrix.size();i++){
            f=0;
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j] == 0){
                    y.push_back(j);
                    f++;
                }
            }
            if(f!=0) matrix[i] = vector<int>(matrix[0].size(),0);
        }
        for(int j:y)
            for(int i=0;i<matrix.size();i++)
                matrix[i][j] = 0;
    }
};73. Set Matrix Zeroes
