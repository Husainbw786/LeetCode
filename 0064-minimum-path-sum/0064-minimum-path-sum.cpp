class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int i,j;
        int dp[n][m];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(i == 0 && j == 0)
                {
                    dp[i][j] = grid[i][j];
                }
                else
                {
                    int up = grid[i][j];
                    int left = grid[i][j];
                     if(i > 0)
                     {
                         up = grid[i][j] + dp[i-1][j];   
                     }
                     else
                     {
                         up = 1000009; 
                     }
                     if(j > 0)
                     {
                         left = grid[i][j] + dp[i][j-1];  
                     }
                     else
                     {
                         left = 1000009;
                     }
                     dp[i][j] = min(up,left);
                }
            }
        }
        return dp[n-1][m-1];
    }
};