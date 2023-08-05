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
        while(x >= 0 && y >= 0)
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
    
    void dfs(int col,int n, vector<string>&board, vector<vector<string>>&ans )
    {
        if(col == n)
        {
            ans.push_back(board);
            return;
        }
        
        for(int row=0;row<n;row++)
        {
            if(is_safe(row,col,board,n) == true)
            {
               board[row][col] = 'Q';
               dfs(col+1,n,board,ans);
               board[row][col] = '.';  
            }
        }
        
    }
    
    
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i] = s;
        }
        dfs(0,n,board,ans);
        return ans;
        
    }
};