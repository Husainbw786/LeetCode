class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int i;
        for(i=0;i<n;i++)
        {
            maxi = max(nums[i],maxi);
            mini = min(nums[i],mini);
        }
        int ans = INT_MIN;
        for(i=1;i<=mini;i++)
        {
            if(maxi % i == 0 && mini % i == 0)
            {
                ans = max(ans,i);
            }
        }
        return ans;
    }
};