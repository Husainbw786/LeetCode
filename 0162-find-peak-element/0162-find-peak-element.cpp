class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n = nums.size();
        if(n == 1)
        {
            return 0;
        }
        if(nums.size() == 2)
        {
            int ans = max(nums[0],nums[1]);
            if(ans == nums[0])
            {
                ans = 0;
            }
            else
            {
                ans = 1;
            }
            return ans;
        }
        int i;
        for( i=1;i<n-1;i++)
        {
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1])
            {
                return i;
            }
        }
        if(nums[n-1] > nums[n-2])
        {
            return i;
        }
        return 0;
    }
};