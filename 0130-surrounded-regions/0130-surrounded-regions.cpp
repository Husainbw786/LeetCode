class Solution {
public:
    
    void dfs(int x,int y,vector<vector<char>>& board,vector<vector<int>>&vis)
    {
        if(x < 0 || y < 0 || x >= board.size() || y >= board[0].size() || vis[x][y] == 1 || board[x][y] == 'X')
        {
            return;
        }
        vis[x][y] = 1;
        dfs(x+1,y,board,vis);
        dfs(x,y+1,board,vis);
        dfs(x-1,y,board,vis);
        dfs(x,y-1,board,vis);
    }
    
    void solve(vector<vector<char>>& board) {
        
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if((board[i][j] == 'O') && (i == 0 || j == 0 || i == n-1 || j == m-1))
                {
                    dfs(i,j,board,vis);
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(vis[i][j] == 0 && board[i][j] == 'O')
                {
                    board[i][j] = 'X';
                }
            }
        }
        
    }
};