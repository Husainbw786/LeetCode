class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int low = 0;
        int high = nums.size() - 1;
        int mini = INT_MAX;
        while(low <= high)
        {
            //int mid = low + (high-low)/2;
            if(nums[low] < mini)
            {
                mini = nums[low];
                low++;
            }
            if(nums[high] < mini)
            {
                mini = nums[high];
                high--;
            }
            else
            {
                low++;
                high--;
            }
        }
        return mini;
    }
};