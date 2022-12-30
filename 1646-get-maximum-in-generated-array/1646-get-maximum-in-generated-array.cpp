class Solution {
public:
    int getMaximumGenerated(int n) {
     
        int i;
        if(n == 0)
        {
            return 0;
        }
        vector<int>nums(n+1,0);
        nums[1] = 1;

        if(n == 2 || n == 1)
        {
            return 1;
        }
        int count = 0;
        if(n % 2 != 0)
        {
           for(i=1;i<=n/2;i++)
            {
                nums[2*i] = nums[i];
                nums[2*i+1] = nums[i] + nums[i+1];
            } 
        }
        else
        {
           for(i=1;i<n/2;i++)
            {
                nums[2*i] = nums[i];
                nums[2*i+1] = nums[i] + nums[i+1];
            } 
        }
        sort(nums.begin(),nums.end());
        return nums[n];
    }
};