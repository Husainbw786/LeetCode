class Solution {
public:
    
    bool is_safe(int row, int col, vector<string>board, int n)
    {
        int x = row;
        int y = col;
        while(x >= 0 && y >= 0)
        {
            if(board[x][y] == 'Q')
            {
                return false;
            }
            x--;
            y--;
        }
         x = row;
         y = col;
        while(y >= 0)
        {
            if(board[x][y] == 'Q')
            {
                return false;
            }
            y--;
        }
        x = row;
        y = col;
        while(x < n && y>=0)
        {
            if(board[x][y] == 'Q')
            {
                return false;
            }
            x++;
            y--;
        }
        return true;
        
    }
    
    int dfs(int col, int n, vector<string>&board)
    {
        if(col == n)
        {
            return 1;
        }
        int count = 0;
        for(int row=0;row<n;row++)
        {
            if(is_safe(row,col,board,n))
            {
                board[row][col] = 'Q';
                count += dfs(col+1,n,board);
                board[row][col] = '.';
            }
        }
        return count;
    }
    
    int totalNQueens(int n) {
        
       
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i] = s;
        }
        return dfs(0,n,board);
       
    }
};