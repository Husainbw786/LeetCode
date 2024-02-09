class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i;
        vector<int>dp(n,1);
        vector<int>hash(n);
        int j;
        int last_idx = 0;
        int maxi = 0;
        for(i=0;i<n;i++)
        {
            hash[i] = i;
            for(j=0;j<i;j++)
            {
                if(nums[i] % nums[j] == 0 && dp[i] < 1 + dp[j])
                {
                    dp[i] = 1 + dp[j];
                    hash[i] = j;
                    
                }
            }
            if(dp[i] > maxi)
            {
                maxi = dp[i];
                last_idx = i;
            }
            
        }
        vector<int>ans;
        
        while(hash[last_idx] != last_idx)
        {
            ans.push_back(nums[last_idx]);
            last_idx = hash[last_idx];
        }
        ans.push_back(nums[last_idx]);
       // reverse(nums.begin(),nums.end());
        return ans;
    }
};