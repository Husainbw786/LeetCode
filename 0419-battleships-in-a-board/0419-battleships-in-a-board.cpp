class Solution {
public:
    
    void dfs(int x, int y,vector<vector<char>>& board,int &count)
    {
        if(x < 0 || y < 0 || x >= board.size() || y >= board[0].size() || board[x][y] == '.' )
        {
            return;
        }
        board[x][y] = '.';
        dfs(x+1,y,board,count);
        dfs(x-1,y,board,count);
        dfs(x,y+1,board,count);
        dfs(x,y-1,board,count);
    }
    
    
    int countBattleships(vector<vector<char>>& board) {
     
        int i,j;
        int n = board.size();
        int m = board[0].size();
        int count = 0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(board[i][j] == 'X')
                {
                    dfs(i,j,board,count);
                    count++;
                }
            }
        }
        return count;
    }
};