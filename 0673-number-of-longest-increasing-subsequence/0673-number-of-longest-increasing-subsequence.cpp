class Solution {
public:
    int findNumberOfLIS(vector<int>& arr) {
      
        int n = arr.size();
        int i,j;
        int maxi = 0;
        vector<int>dp(n,1);
        vector<int>cnt(n,1);
        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(arr[i] > arr[j] && dp[i] < 1+dp[j])
                {
                    dp[i] = 1 + dp[j];
                    cnt[i] = cnt[j];
                }
                else if(arr[i] > arr[j] && dp[i] == 1 + dp[j])
                {
                    cnt[i] += cnt[j];
                }
            }
            if(dp[i] > maxi)
            {
                maxi = dp[i];
            }
        }
        
        int ans = 0;
        for(i=0;i<n;i++)
        {
            if(dp[i] == maxi)
            {
                ans += cnt[i];
            }
        }
        return ans;
        
    }
};