class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        
        long long ans = 0;
        int zeroCount = 0;
        int i;
        int n = nums.size();
        for(i=0;i<n;i++)
        {
            if(nums[i] == 0)
            {
                zeroCount++;
                ans += zeroCount;
            }
            else
            {
                zeroCount = 0;
            }
        }
        return ans;
    }
};