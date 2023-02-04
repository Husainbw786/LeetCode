class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        int i,j;
        int dp[n][m];
        for(j=0;j<m;j++)
        {
            dp[0][j] = matrix[0][j];
        }
        for(i=1;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                int up = matrix[i][j] + dp[i-1][j];
                int ld = 1e9;
                int rd = 1e9;
                if(j-1 >= 0)
                {
                    ld = matrix[i][j] + dp[i-1][j-1];
                }
                if(j+1 < m)
                {
                    rd = matrix[i][j] + dp[i-1][j+1];
                }
                dp[i][j] = min(up,min(ld,rd));
            }
        }
        int mini = INT_MAX;
        for(i=0;i<m;i++)
        {
            mini = min(dp[n-1][i],mini);
        }
        return mini;
    }
};