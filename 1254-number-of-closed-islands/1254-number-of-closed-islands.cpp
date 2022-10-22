class Solution {
public:
    
    void dfs(int x, int y,vector<vector<int>>& grid, bool & flag)
    {
        if(x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size() || grid[x][y] != 0)
        {
            return;
        }
        if(x == 0 || y == 0 || x == grid.size()-1 || y == grid[0].size()-1)
        {
            flag = false;
        }
        grid[x][y] = 2;
        dfs(x+1,y,grid,flag);
        dfs(x-1,y,grid,flag);
        dfs(x,y+1,grid,flag);
        dfs(x,y-1,grid,flag);
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        
        int i,j;
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                
                if(grid[i][j] == 0)
                {
                    bool flag = true;
                    dfs(i,j,grid,flag);
                    if(flag)
                    {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};