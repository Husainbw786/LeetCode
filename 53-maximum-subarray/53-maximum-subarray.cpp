class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int max_ending_here = 0;
        int max_sum = INT_MIN;
        int i;
        for(i=0;i<nums.size();i++)
        {
            max_ending_here += nums[i];
            if(max_ending_here < nums[i])
            {
                max_ending_here = nums[i];
            }
            if(max_sum < max_ending_here)
            {
                max_sum = max_ending_here;
            }
        }
        return max_sum;
    }
};