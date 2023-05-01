class Solution {
public:
    
    void dfs(int i, int j, vector<vector<int>>&vis, vector<vector<int>>grid, int &fish)
    {
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || vis[i][j] != 0 || grid[i][j] == 0)
        {
            return;
        }
        vis[i][j] = 1;
        fish += grid[i][j];
        dfs(i+1,j,vis,grid,fish);
        dfs(i-1,j,vis,grid,fish);
        dfs(i,j+1,vis,grid,fish);
        dfs(i,j-1,vis,grid,fish);
        
    }
    
    int findMaxFish(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int i,j;
        int maxi = 0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j] != 0 && vis[i][j] == 0)
                {
                    int fish = 0;
                    dfs(i,j,vis,grid,fish);
                    maxi = max(fish,maxi);
                }
            }
        }
        return maxi;
    }
};