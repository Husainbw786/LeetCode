class Solution {
public:
    
    int solve(int i, int can_buy, vector<int>prices,vector<vector<int>>&dp)
    {
        if(i >= prices.size())
        {
            return 0;
        }
        if(dp[i][can_buy] != -1)
        {
            return dp[i][can_buy];
        }
        int profit = 0;
        if(can_buy)
        {
            profit = max(-prices[i] + solve(i+1,0,prices,dp),solve(i+1,1,prices,dp));
        }
        else
        {
            profit = max(prices[i] + solve(i+2,1,prices,dp),solve(i+1,0,prices,dp));
        }
        return dp[i][can_buy] = profit;
        
    }
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return solve(0,1,prices,dp);
    }
};