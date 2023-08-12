class Solution {
public:
    
    int solve(int idx, int buy, vector<int>prices,vector<vector<int>>&dp)
    {
        if(idx == prices.size())
        {
            return 0;
        }
        if(dp[idx][buy] != -1)
        {
            return dp[idx][buy];
        }
            
        int profit = 0;
        
        if(buy == 1)
        {
           profit = max(-prices[idx] + solve(idx+1,0,prices,dp),solve(idx+1,1,prices,dp)); 
        }
        else
        {
            profit = max(prices[idx] + solve(idx+1,1,prices,dp),solve(idx+1,0,prices,dp));
        }
        return dp[idx][buy] = profit;
    }
    
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
      //  vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
       // return solve(0,1,prices,dp);
        int dp[n+1][2]; // 2 beacuse buy or not buy
        dp[n][0] = 0;
        dp[n][1] = 0;
        
        for(int idx=n-1;idx>=0;idx--)
        {
            for(int buy=0;buy<=1;buy++)
            {
                if(buy == 1)
                {
                    dp[idx][buy] = max(-prices[idx] + dp[idx+1][0],dp[idx+1][1]);
                }
                else
                {
                    dp[idx][buy] = max(prices[idx] + dp[idx+1][1],dp[idx+1][0]);
                }
            }
        }
        return dp[0][1];
        
    }
};