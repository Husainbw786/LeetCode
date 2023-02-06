class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i;
        int count = 0;
        for(i=0;i<n-1;i++)
        {
            if(nums[i] < nums[i+1])
            {
                continue;
            }
            else if(nums[i] == nums[i+1])
            {
                count++;
                nums[i+1] = nums[i+1] + 1;
            }
            else
            {
                int x = nums[i] - nums[i+1];
                count += x+1;
                nums[i+1] += x + 1; 
            }
        }
        return count;
             
    }
};