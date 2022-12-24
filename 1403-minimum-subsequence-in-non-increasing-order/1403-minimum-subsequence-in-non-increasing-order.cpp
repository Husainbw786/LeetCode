class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int sum1 = 0;
        int sum2 = 0;
        int i;
        int n = nums.size();
        for(i=0;i<n-1;i++)
        {
            sum1 += nums[i];
        }
        sum2 += nums[n-1];
        int j = n-2;
        while(sum1 >= sum2)
        {
           sum1 -= nums[j];
           sum2 += nums[j];
           j--;
        }
        vector<int>ans;
        for(i=n-1;i>j;i--)
        {
             ans.push_back(nums[i]);
        }
        return ans;
        
    }
};