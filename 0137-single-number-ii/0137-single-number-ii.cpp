class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n = nums.size();
        if(n == 1)
        {
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        int i = 1;
        if(nums[0] != nums[1])
        {
            return nums[0];
        }
        while(i < n)
        {
            if(nums[i-1] == nums[i])
            {
                i += 3;
            }
            else
            {
                break;
            }
        }
        if(nums[n-1] != nums[n-2])
        {
            return nums[n-1];
        }
        return nums[i-1];
    }
};