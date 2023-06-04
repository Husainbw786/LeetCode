class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
     
        int n = nums.size();
        int i;
        int count = 0;
        for(i=0;i<n;i++)
        {
            if(nums[i] == 1)
            {
                while(i-1 >= 0)
                {
                    swap(nums[i],nums[i-1]);
                    count++;
                    i--;
                }
            }
        }
        
        for(i=0;i<n;i++)
        {
            if(nums[i] == n)
            {
                while(i+1 < n)
                {
                    swap(nums[i],nums[i+1]);
                    count++;
                    i++;
                }
            }
        }
        return count;
    }
};