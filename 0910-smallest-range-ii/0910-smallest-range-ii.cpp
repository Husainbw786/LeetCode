class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
     
        
        sort(nums.begin(),nums.end());
        int i;
        int n = nums.size();
        int ans = nums[n-1] - nums[0];
        for(i=0;i<n-1;i++)
        {
            int j = i+1;
            int low = min(nums[0]+k,nums[j]-k);
            int high = max(nums[n-1]-k,nums[i]+k);
            ans = min(ans,high-low);
        }
        
        return ans;
    }
};