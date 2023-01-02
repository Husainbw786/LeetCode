class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        int n = nums.size();
        int i;
        int maxi = INT_MIN;
        int ans = 0;
        for(i=0;i<n;i++)
        {
            if(maxi < nums[i])
            {
               maxi = nums[i];
               ans = i; 
            }
        }
        for(i=0;i<n;i++)
        {
            if(nums[i] == maxi)
            {
                continue;
            }
            if(nums[i]*2 > maxi)
            {
                return -1;
            }
        }
        return ans;
    }
};