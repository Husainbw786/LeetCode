class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        
        int majority;
        int count = 0;
        int i;
        int n = nums.size();
        for(i=0;i<n;i++)
        {
            if(count  != 0)
            {
                if(nums[i] == majority)
                {
                    count++;
                }
                else
                {
                    count--;
                }
            }
            else
            {
                majority = nums[i];
                count = 1;
            }
        }
        return majority;
    }
};