class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     
        int curr_sum = 0;
        int max_sum = INT_MIN;
        int i;
        int n = nums.size();
        for(i=0;i<n;i++)
        {
            curr_sum += nums[i];
            max_sum = max(curr_sum,max_sum);
            if(curr_sum < 0)
            {
                curr_sum = 0;
            }
        }
        return max_sum;
    }
};