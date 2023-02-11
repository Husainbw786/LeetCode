class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     
        
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i;
        int maxi = 1;
        int count = 1;
        if(n == 0)
        {
            return 0;
        }
        
        for(i=0;i<n-1;i++)
        {
            if(nums[i] == nums[i+1])
            {
                continue;
            }
            if(nums[i] + 1 == nums[i+1])
            {
                count++;
                maxi = max(count,maxi);
            }
            else
            {
                count = 1;
            }
        }
           return maxi;           
    }
};