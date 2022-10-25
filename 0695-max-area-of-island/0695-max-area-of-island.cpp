class Solution {
public:
    
    void MaxArea(int i, int j,vector<vector<int>>& grid,int &count,vector<vector<bool>>&vis)
    {
        int n = grid.size();
        int m = grid[0].size();
        if(i < 0 || j < 0 || i >= n || j >= m || vis[i][j] || grid[i][j] != 1)
        {
            return;
        }
        vis[i][j] = true;
        count++;
        MaxArea(i+1,j,grid,count,vis);
        MaxArea(i-1,j,grid,count,vis);
        MaxArea(i,j+1,grid,count,vis);
        MaxArea(i,j-1,grid,count,vis);
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int i,j;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
    
        int max_area = 0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j] == 1)
                {
                    int count = 0;
                     MaxArea(i,j,grid,count,vis);
                    max_area = max(count,max_area);
                }
            }
        }
        return max_area;
        
    }
};