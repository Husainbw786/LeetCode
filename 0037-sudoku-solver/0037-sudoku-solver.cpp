class Solution {
public:
    
    bool is_valid(int x, int y, vector<vector<char>>&board, char c)
    {
        for(int i=0;i<9;i++)
        {
            if(board[x][i] == c)
            {
                return false;
            }
            if(board[i][y] == c)
            {
                return false;
            }
            if(board[3 * (x/3) + i/3][3 * (y/3) + i%3] == c)
            {
                return false;
            }
        }
        return true;
        
    }
    
    bool solve(vector<vector<char>>&board)
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j] == '.')
                {
                    for(char c='1';c<='9';c++)
                    {
                        if(is_valid(i,j,board,c))
                        {
                            board[i][j] = c;
                            if(solve(board) == true)
                            {
                                return true;
                            }
                            else
                            {
                                board[i][j] = '.';
                            }
                        }
                    }  
                  return false;
                }
               
            }
        }
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        
        solve(board);
    }
    
    
};