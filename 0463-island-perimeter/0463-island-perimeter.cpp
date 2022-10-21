class Solution {
public:
    
    void dfs(int x,int y,vector<vector<int>>& grid,int &count,vector< vector<bool>>&vis)
    {
        int n = grid.size();
        int m = grid[0].size();
        if(x < 0 || y < 0 || x >= n || y >=m || grid[x][y]  == 0 || vis[x][y] == true)
        {
            return;
        }
        vis[x][y] = true;
        if(x+1 == n || grid[x+1][y] == 0)
        {
            count++;
        }
        if(x-1 < 0 || grid[x-1][y] == 0)
        {
            count++;
        }
        if(y+1 == m || grid[x][y+1] == 0)
        {
            count++;
        }
        if(y-1 < 0 || grid[x][y-1] == 0)
        {
            count++;
        }
        
        dfs(x+1,y,grid,count,vis);
        dfs(x-1,y,grid,count,vis);
        dfs(x,y+1,grid,count,vis);
        dfs(x,y-1,grid,count,vis);
        
        
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        vector< vector<bool> > visited (n, vector<bool> (m, false));
        int i,j;
        int count = 0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j] == 1)
                {
                    dfs(i,j,grid,count,visited);
                    break;
                }
            }
        }
        return count;
    }
};