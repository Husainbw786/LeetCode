class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        if(n==1) 
        {
            return nums[0];
        }
        vector<int>v1,v2;
        vector<int>dp1(n);
        vector<int>dp2(n);
        int i;
        
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                v1.push_back(nums[i]);
                continue;
            }
            if(i==n-1)
            {
                v2.push_back(nums[i]);
                continue;
            }
            v1.push_back(nums[i]);
            v2.push_back(nums[i]);
        }
         
        dp1[0] = v1[0];
        for(i=1;i<n-1;i++)
        {
            int pick = v1[i];
            if(i>1)
            {
                pick += dp1[i-2];
            }
            int not_pick = dp1[i-1];
            dp1[i] = max(pick,not_pick);
        }
        
        dp2[0] = v2[0];
        for(i=1;i<n-1;i++)
        {
            int pick = v2[i];
            if(i>1)
            {
                pick += dp2[i-2];
            }
            int not_pick = dp2[i-1];
            dp2[i] = max(pick,not_pick);
        }
        return max(dp1[n-2],dp2[n-2]);
    }
};