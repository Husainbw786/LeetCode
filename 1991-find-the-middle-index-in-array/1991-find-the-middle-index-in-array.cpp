class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        
        int sum = 0;
        int i;
        int len = nums.size();
        for(i=0;i<len;i++)
        {
            sum += nums[i];
        }
        int left_sum = 0;
        for(i=0;i<len;i++)
        {
            if(left_sum == sum - nums[i])
            {
                return i;
            }
            left_sum += nums[i];
            sum = sum - nums[i];
        }
        return -1;
    }
};