class Solution {
public:
    
    int solve(int i, int target, vector<int>&nums,vector<vector<int>>&dp)
    {
        if(target == 0)
        {
            return 0;
        }
        if(target < 0)
        {
            return INT_MIN;
        }
        if(i == 0)
        {
            if(nums[0] == target)
            {
                return 1;
            }
            return INT_MIN;
        }
        if(dp[i][target] != -1)
        {
            return dp[i][target];
        }
        int take = 1 + solve(i-1,target-nums[i],nums,dp);
        int not_take = solve(i-1,target,nums,dp);
        return dp[i][target] = max(take,not_take);
    }
    
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        int ans = solve(n-1,target,nums,dp);
        if(ans > 0)
        {
            return ans;
        }
        return -1;
        
    }
};