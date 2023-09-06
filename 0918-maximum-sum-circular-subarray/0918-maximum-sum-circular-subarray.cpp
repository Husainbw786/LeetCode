class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int n = nums.size();
        int i;
        int total_sum = 0;
        bool flag = false;
        int maxi = INT_MIN;
        for(i=0;i<n;i++)
        {
            if(nums[i] >= 0)
            {
                flag =  true;
            }
            total_sum += nums[i];
            maxi = max(maxi,nums[i]);
        }
        if(!flag)
        {
            return maxi;
        }
        // calculate maximum sum subaaray
        int curr = 0;
        int ans1 = INT_MIN;
        for(i=0;i<n;i++)
        {
            curr += nums[i];
            ans1 = max(curr,ans1);
            if(curr < 0)
            {
                curr = 0;
            }
        }
        curr = 0;
        int ans2 = INT_MAX;
        for(i=0;i<n;i++)
        {
            curr += nums[i];
            ans2 = min(ans2,curr);
            if(curr >= 0)
            {
                curr = 0;
            }
        }
        
        return max(total_sum-ans2,ans1);
        
    }
};