class Solution {
    bool isSafe(vector<vector<char>>& board,int r, int c, char ch){
        for(int i=0;i<9;i++)
            if(board[i][c] == ch || board[r][i] == ch)
                return false;
        
        int rr = r-r%3, cc = c - c%3;
    
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                if(board[i+rr][j+cc] == ch){
                    return false;
                }
        return true;
            
    }
    bool solve(vector<vector<char>>& board, int r, int c){
        if(c == 9){
            c = 0;
            r++;
        }
        
        if(r == 9)
            return true;
        
        if(board[r][c] != '.')
            return solve(board,r,c+1);
        
        for(int i=1;i<=9;i++){
            if(isSafe(board,r,c,i+48)){
                board[r][c] = i+48;
                if(solve(board,r,c+1))
                    return true;
            }
            board[r][c] = '.';
        }
        
        return false;
        
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board,0,0);
    }
};
