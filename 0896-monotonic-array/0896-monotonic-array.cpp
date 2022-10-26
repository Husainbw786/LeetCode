class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        int i;
        int n = nums.size();
        bool inc = true;
        bool dec = true;
        for(i=1;i<n;i++)
        {
            if(nums[i] < nums[i-1])
            {
                inc = false;
            }
            if(nums[i] > nums[i-1])
            {
                dec = false;
            }
            if(!inc && !dec)
            {
                return false;
            }
        }
        return true;
    }
};