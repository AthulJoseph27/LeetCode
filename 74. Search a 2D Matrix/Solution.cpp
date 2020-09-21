class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0) return false;
        if(matrix[0].size()==0) return false;
        int s = 0, e = matrix.size()-1,mid,r,c = matrix[0].size()-1;
        while(s<e){
            mid = (s+e)/2;
            if(matrix[mid][c] == target) return true;
            if(matrix[mid][c] < target) s = mid+1;
            else e = mid;
        }
        r = e;
        s=0;
        e = c;
        while(s<=e){
            mid = (s+e)/2;
            if(matrix[r][mid] == target) return true;
            if(matrix[r][mid] > target) e = mid-1;
            else s = mid+1;
        }
        return false;
    }
};
