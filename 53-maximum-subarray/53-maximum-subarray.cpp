class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     
        int temp_sum = 0;
        int max_sum = INT_MIN;
        int i;
        int n = nums.size();
        for(i=0;i<n;i++)
        {
            temp_sum += nums[i];
            if(temp_sum < nums[i])
            {
                temp_sum = nums[i];
            }
            if(max_sum < temp_sum)
            {
                max_sum = temp_sum;
            }
        }
        return max_sum;
    }
};