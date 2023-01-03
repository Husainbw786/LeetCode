class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        
        int n = nums.size();
        int i = 0;
        int j = n-1;
        while(i < j)
        {
            if(nums[i] < nums[i+1])
            {
                i++;
            }
            else if(nums[j] > nums[j-1])
            {
                j--;
            }
            else
            {
                break;
            }
        }
        if(i == n-1)
        {
            return true;
        }
        if((i+1) != j)
        {
            return false;
        }
        if(i == 0 || j == n-1)
        {
            return true;
        }
        if(nums[i-1] < nums[j])
        {
            return true;
        }
        if (nums[i] < nums[j+1])
        {
            return true;
        }
        
        return false;
    }
};