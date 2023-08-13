class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> dp(n, 1);
        int maxi = 1;  // Initialize maxi with 1, since even a single element is a valid LIS.

        for (int i = 1; i < n; i++) 
        {
            for (int prev = 0; prev < i; prev++) 
            {
                if (nums[i] > nums[prev])
                {
                    dp[i] = max(dp[i], dp[prev] + 1);  // Update dp[i] with the maximum length so far
                }
            }
            maxi = max(maxi, dp[i]);  // Update maxi after processing dp[i] for this iteration
        }

        return maxi;
    }
};
