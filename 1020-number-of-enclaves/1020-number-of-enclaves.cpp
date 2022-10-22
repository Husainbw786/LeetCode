class Solution {
public:
    
    void dfs(int x ,int y, vector<vector<int>>& grid)
    {
        if(x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size() || grid[x][y] == 0 )
        {
            return;
        }
        grid[x][y] = 0;
        dfs(x+1,y,grid);
        dfs(x-1,y,grid);
        dfs(x,y+1,grid);
        dfs(x,y-1,grid);
        
    }
    
    int numEnclaves(vector<vector<int>>& grid) {
        int i,j;
        int n = grid.size();
        int m = grid[0].size();
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(i == 0 || j == 0 || i == n-1 || j == m-1)
                {
                    if(grid[i][j] == 1)
                    {
                        dfs(i,j,grid);
                    } 
                }
            }
        }
        int count = 0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j] == 1)
                {
                    count++;
                }
            }
        }
        return count;
    }
};