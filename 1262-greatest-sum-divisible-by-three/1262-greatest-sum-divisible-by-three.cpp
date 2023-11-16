class Solution {
public:
    
    int solve(int i,int mod,vector<int>&nums,vector<vector<int>>&dp)
    {
        if(i < 0)
        {
            if(mod == 0)
            {
                return 0;
            }
            return -1e7;
        }
        if(dp[i][mod] != -1)
        {
            return dp[i][mod];
        }
        int pick = nums[i] + solve(i-1,(mod+nums[i]) % 3,nums,dp);
        int not_pick = solve(i-1,mod,nums,dp);
        return dp[i][mod] = max(pick,not_pick);
    }
    
    int maxSumDivThree(vector<int>& nums) {
        
        int n = nums.size();
        int mod = 0;
        vector<vector<int>>dp(n,vector<int>(3,-1));
        return solve(n-1,mod,nums,dp);
            
    }
};