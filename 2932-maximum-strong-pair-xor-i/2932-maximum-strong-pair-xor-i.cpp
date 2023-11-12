class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        
        int n = nums.size();
        int i,j;
        int maxi = INT_MIN;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(abs(nums[i] - nums[j]) <= min(nums[i],nums[j]))
                {
                    maxi = max(maxi,nums[i] ^ nums[j]);
                }
            }
        }
        return maxi;
    }
};