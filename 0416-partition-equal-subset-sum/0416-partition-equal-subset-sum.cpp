class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
        }
        if(sum%2)
        {
            return false;
        }
        sum/=2;
        vector<vector<bool>>dp(nums.size(), vector<bool>(sum+1, false));
        for(int i=0; i<nums.size()-1; i++){
            dp[i][0]=true;
        }
        if(nums[0]<sum)
        {
            dp[0][nums[0]]=true;        
        }
        for(int i=1; i<nums.size(); i++)
        {
            for(int j=1; j<=sum; j++)
            {
                bool nt=dp[i-1][j];
                bool t=false;
                if(nums[i]<=j)
                {
                    t=dp[i-1][j-nums[i]];
                }
                dp[i][j]=(t|nt);
            }
        }
        return dp[nums.size()-1][sum];
    }
};