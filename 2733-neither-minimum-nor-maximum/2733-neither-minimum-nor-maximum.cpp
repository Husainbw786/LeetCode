class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        
        int n = nums.size();
        int i;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(i=0;i<n;i++)
        {
            maxi = max(maxi,nums[i]);
            mini = min(mini,nums[i]);
        }
        for(i=0;i<n;i++)
        {
            if(nums[i] != maxi && nums[i] != mini)
            {
                return nums[i];
            }
        }
        return -1;
    }
};