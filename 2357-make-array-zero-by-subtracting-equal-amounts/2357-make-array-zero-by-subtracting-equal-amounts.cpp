class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i,j;
        int count = 0;
        for(i=0;i<n;i++)
        {
            if(nums[i] == 0)
            {
                continue;
            }
            int x = nums[i];
            for(j = 0;j<n;j++)
            {
                if(nums[j] > 0)
                {
                    nums[j] = nums[j] - x;
                }
            }
            count++;
        }
        return count;
        
    }
};