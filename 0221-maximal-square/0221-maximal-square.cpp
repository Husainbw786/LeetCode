class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        int maxi = 0;
        int i = 0;
        int j = 0;
        int dp[n+1][m+1];
        for(i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
                else
                {
                    if(matrix[i-1][j-1] == '1')
                    {
                        dp[i][j] = min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1])) + 1;
                        maxi = max(dp[i][j],maxi);
                    }
                    else
                    {
                        dp[i][j] = 0;
                    }
                }
            }
        }
        return maxi*maxi;
        
    }
};