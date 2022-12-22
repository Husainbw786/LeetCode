class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int n = nums.size();
        int i;
        int ans = 0;
        for(i=0;i<n-1;i++)
        {
            if(nums[i] < nums[i+1])
            {
                continue;
            }
            else
            {
                int diff = nums[i] - nums[i+1];
                ans += 1 + diff;
                nums[i+1] = nums[i] + 1; 
            }
        }
        return ans;
    }
};