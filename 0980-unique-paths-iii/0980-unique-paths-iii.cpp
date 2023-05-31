class Solution {
public:
    int result = 0;
    void dfs(int i, int j, vector<vector<int>>&grid, int count, int empty)
    {
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == -1 || grid[i][j] == -2)
        {
            return;
        }
        if(grid[i][j] == 2 && count-1 == empty)
        {
            result++;
            return;
        }
        int temp = grid[i][j];
        grid[i][j] = -2;
        dfs(i+1,j,grid,count+1,empty);
        dfs(i-1,j,grid,count+1,empty);
        dfs(i,j+1,grid,count+1,empty);
        dfs(i,j-1,grid,count+1,empty);
        
        grid[i][j] = temp;
        return;
    
    }
    
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int i,j;
        int count = 0;
        int start = 0;
        int end = 0;
        int zero_count = 0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j] == 1)
                {
                    start = i;
                    end = j;
                }
                else if(grid[i][j] == 0)
                {
                    zero_count++;
                }
            }
        }
      
        dfs(start,end,grid,count,zero_count);
        return result;
    }
};