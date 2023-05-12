class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
     
        int n = questions.size();
        int i = n-1;
        vector<long long int>dp(n+1,0);
        dp[i] = questions[i][0];
        
        for(i=n-2;i>=0;i--)
        {
            
            dp[i] = questions[i][0];
            
            int skip = questions[i][1];
            if(skip+i+1 < n)
            {
                dp[i] += dp[skip + i + 1];
            }
            
            dp[i] = max(dp[i],dp[i+1]);
        }
        
        return dp[0];
        
    }
};