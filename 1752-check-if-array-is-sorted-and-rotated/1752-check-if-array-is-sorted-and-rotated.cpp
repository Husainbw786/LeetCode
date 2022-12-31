class Solution {
public:
    bool check(vector<int>& nums) {
     
        int n = nums.size();
        int i;
        int count = 0;
        for(i=1;i<n;i++)
        {
            if(nums[i-1] > nums[i])
            {
                count++;
            }
        }
        if(nums[0] < nums[n-1])
        {
            count++;
        }
        if(count <= 1)
        {
            return true;
        }
        return false;
    }
};