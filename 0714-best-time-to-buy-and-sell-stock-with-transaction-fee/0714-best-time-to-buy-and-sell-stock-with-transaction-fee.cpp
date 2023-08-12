class Solution {
public:
    
    int solve(int idx,int buy, vector<int>prices, int fee,vector<vector<int>>&dp)
    {
        if(idx == prices.size())
           {
               return 0;
           }
        if(dp[idx][buy] != -1)
        {
            return dp[idx][buy];
        }
        if(buy == 1)
        {
            return dp[idx][buy] = max(-prices[idx] + solve(idx+1,0,prices,fee,dp) , solve(idx+1,1,prices,fee,dp));
        }
        else
        {
            return dp[idx][buy] = max(prices[idx] + solve(idx+1,1,prices,fee,dp) - fee , solve(idx+1,0,prices,fee,dp));
        }
    }
    
    int maxProfit(vector<int>& prices, int fee) {
        
        int n = prices.size();
       //vector<vector<int>>dp(n,vector<int>(2,-1));
        //return solve(0,1,prices,fee,dp);
        int dp[n+1][2];
        dp[n][0] = 0;
        dp[n][1] = 0;
        int i,j;
        for(i=n-1;i>=0;i--)
        {
            for(j=0;j<=1;j++)
            {
                if(j == 1)
                {
                    dp[i][j] = max(-prices[i] + dp[i+1][0], dp[i+1][1]); 
                }
                else
                {
                    dp[i][j] = max(prices[i] - fee + dp[i+1][1],dp[i+1][0]);
                }
            }
        }
        return dp[0][1];
    }
    
};