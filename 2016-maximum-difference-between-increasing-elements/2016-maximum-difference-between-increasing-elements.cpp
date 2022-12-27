class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int curr = INT_MAX;
        int tdiff = 0;
        int diff = 0;
        int i;
        int n = nums.size();
        for(i=0;i<n;i++)
        {
            if(nums[i] < curr)
            {
                curr = nums[i];
            }
            diff = nums[i] - curr;
            if(tdiff < diff)
            {
                tdiff = diff;
            }
        }
        if(tdiff == 0)
        {
            return -1;
        }
        return tdiff;
    }
};