class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        
        int i = 0;
        int j;
        int count = 0;
        for(j=1;j<nums.size();j++)
        {
            if(i < j)
            {
              if(abs(nums[i] - nums[j] )== k)
                {
                    count++;
                }
            }
            if(j == nums.size() - 1)
            {
                i++;
                j = i;
            }
        }
        return count;
    }
};