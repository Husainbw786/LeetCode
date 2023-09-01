class Solution {
public:
    
    int solve(int idx, int target, vector<int>coins,vector<vector<int>>&dp) 
    {
        if(idx == 0)
        {
            if(target % coins[idx] == 0)
            {
                return target/coins[idx];
            }
            else
            {
                return 1e6;
            }
        }
        if(dp[idx][target] != -1)
        {
            return dp[idx][target];
        }
        int not_take = solve(idx-1,target,coins,dp);
        int take = 1e6;
        if(coins[idx] <= target)
        {
            take = 1 + solve(idx,target-coins[idx],coins,dp);
        }
        return dp[idx][target] = min(take,not_take);
    }
    
    
    int coinChange(vector<int>& coins, int amount) {
      
        int n = coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int i;
        int ans = 1e6;
        ans = min(solve(n-1,amount,coins,dp),ans);
        if(ans >= 1e6)
        {
            return -1;
        }
        return ans;
    }
};