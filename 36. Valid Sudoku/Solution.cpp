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
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
                if(board[i][j] == '.')
                    continue;
                else{
                    char temp = board[i][j];
                    board[i][j] = '.';
                    if(!isSafe(board,i,j,temp))
                        return  false;
                    board[i][j] = temp;
                }
        return true;
    }
};
