class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int len = nums.size();
        int sum = 0;
        for(int i=0;i<len;i++)
        {
            sum += nums[i];
        }
        int left_sum = 0;
        for(int i=0;i<len;i++)
        {
            if(left_sum == sum - nums[i])
            {
                return i;
            }
            left_sum += nums[i];
            sum = sum-nums[i];
        }
        return -1;
    }
};











