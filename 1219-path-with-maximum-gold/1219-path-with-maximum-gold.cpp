class Solution {
public:
    
    int dfs(int x,int y,vector<vector<int>>&grid)
    {
        if(x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size() || grid[x][y] == 0)
        {
            return 0;
        }
         
        int temp = grid[x][y];
        grid[x][y] = 0;
        
      int a = temp + dfs(x+1,y,grid);
      int b = temp + dfs(x-1,y,grid);
      int c = temp + dfs(x,y-1,grid);
      int d = temp + dfs(x,y+1,grid);
      
      grid[x][y] = temp;
      return max(max(a,b),max(c,d));
        
    }
    
    int getMaximumGold(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int i,j;
        int maxi = 0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                int gold = 0;
                if(grid[i][j] != 0)
                {
                   maxi = max(dfs(i,j,grid),maxi);
                    
                }
            }
        }
        return maxi;
    }
};