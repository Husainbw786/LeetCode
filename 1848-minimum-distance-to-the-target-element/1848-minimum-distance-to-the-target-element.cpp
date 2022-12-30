class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        
        int mini = INT_MAX;
        int i;
        int n = nums.size();
        for(i=0;i<n;i++)
        {
            if(nums[i] == target)
            {
                int diff = abs(start - i);
                mini = min(mini,diff);
            }
        }
        return mini;
    }
};