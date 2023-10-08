class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        int i,j;
        int dp[n+1][m+1];
        int sum = 0;
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=m;j++)
            {
                if(i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
                else
                {
                    if(matrix[i-1][j-1] == 1)
                    {
                        dp[i][j] = min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1])) + 1;
                        sum += dp[i][j];
                    }
                    else
                    {
                        dp[i][j] = 0;
                    }
                }
            }
        }
        return sum;
    }
};