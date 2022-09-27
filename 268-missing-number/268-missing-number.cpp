class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n*(n+1) / 2;
        int i;
        for(i=0;i<n;i++)
        {
            sum = sum - nums[i];
        }
        return sum;
    }
};