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
                return 1e7;
            }
        }
        if(dp[idx][target] != -1)
        {
            return dp[idx][target];
        }
        int not_take = solve(idx-1,target,coins,dp);
        int take = INT_MAX;
        if(coins[idx] <= target)
        {
            take = 1 + solve(idx,target-coins[idx],coins,dp);
        }
        return dp[idx][target] = min(take,not_take);
    }
    
    int coinChange(vector<int>& coins, int amount) {
        
        int n = coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int result = solve(n-1,amount,coins,dp);
        if(result >= 1e6)
        {
            return -1;
        }
        return result;
        
    }
};