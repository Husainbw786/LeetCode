class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
         int row = grid.size();
        int col = grid[0].size();
        int dp[row][col];
        bool flag = false;
        int i,j;
        for(i=0;i<row;i++)
        {
            if(flag || grid[i][0] == 1)
            {
                flag = true;
                dp[i][0] = 0;
            }
            else
            {
                dp[i][0] = 1;
            }
        }
        flag = false;
        for(i=0;i<col;i++)
        {
            if(flag || grid[0][i] == 1)
            {
                flag = true;
                dp[0][i] = 0;
            }
            else
            {
                dp[0][i] = 1;
            }
        }
        for(i=1;i<row;i++)
        {
            for(j=1;j<col;j++)
            {
               if(grid[i][j] == 1)
               {
                   dp[i][j] = 0;
               }
               else
               {
                 dp[i][j] = dp[i-1][j] + dp[i][j-1];      
               }
            }
        }
        return dp[row-1][col-1];
    }
};
