class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        
        int n = nums.size();
        int i;
        int sum = nums[0];
        int maxi = INT_MIN;
        maxi = max(sum,maxi);
        for(i=0;i<n-1;i++)
        {
            
            if(nums[i] < nums[i+1])
            {
                sum += nums[i+1];
            }
            else
            {
                sum = 0;
                sum += nums[i+1];
            }
            maxi = max(sum,maxi);
        }
        
        return maxi;
    }
};