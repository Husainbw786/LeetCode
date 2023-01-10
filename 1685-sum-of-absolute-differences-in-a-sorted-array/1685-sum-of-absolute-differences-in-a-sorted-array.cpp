class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>prefix(n,0);
        vector<int>suffix(n,0);
        prefix[0] = nums[0];
        suffix[n-1] = nums[n-1];
        int i;
        for(i=1;i<n;i++)
        {
            prefix[i] = prefix[i-1] + nums[i];
        }
        vector<int>ans(n,0);
        for(i=n-2;i>=0;i--)
        {
            suffix[i] = suffix[i+1] + nums[i];
        }
        
        for(i=0;i<n;i++)
        {
            ans[i] = nums[i] * (i+1) - prefix[i];
            if(i != n-1)
            {
                ans[i] += suffix[i+1] - nums[i] * (n-i-1);
            }
        }
        return ans;
    }
};