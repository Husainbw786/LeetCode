class Solution {
public:
   
    int rob(vector<int>& nums) {
        vector<int> v1,v2;
        int n = nums.size();
        if(n==1) 
        {
            return nums[0];
        }
        vector<int> dp1(n-1,0);
        vector<int>dp2(n-1,0);
        for(int i=0;i<n;i++)
        {
            if(i==0) 
            {   
               v1.push_back(nums[i]);
            }
            else if(i == n-1) 
            {
                v2.push_back(nums[i]);
            }
            else
            {
                 v2.push_back(nums[i]);
                 v1.push_back(nums[i]);
            }
        }

        dp1[0] = v1[0];
        
        for(int i=1;i<n-1;i++)
        {
            int notpick = 0 + dp1[i-1];
            int pick = v1[i] ;
            if(i>1)
            {
                pick +=  dp1[i-2];
            }
            dp1[i] = max(pick,notpick);
        }
        dp2[0] = v2[0];
        for(int i=1;i<n-1;i++)
        {
            int notpick = 0 + dp2[i-1];
            int pick = v2[i];
            if(i>1)
            {
                pick +=  dp2[i-2];
            }
            dp2[i] = max(pick,notpick);
        }


        return max( dp1[n-2] , dp2[n-2] );
    }
};