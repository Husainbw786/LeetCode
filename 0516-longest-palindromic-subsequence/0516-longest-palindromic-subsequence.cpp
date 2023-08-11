class Solution {
public:
    int longestPalindromeSubseq(string s1) {
        
        string s2 = s1;
        int n = s1.size();
        reverse(s2.begin(),s2.end());
        int dp[n+1][n+1];
        int i,j;
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=n;j++)
            {
                if(i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
                else
                {
                    if(s1[i-1] == s2[j-1])
                    {
                        dp[i][j] = 1 + dp[i-1][j-1];
                    }
                    else
                    {
                        dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                    }
                }
            }
        }
        return dp[n][n];
    }
};