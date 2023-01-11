class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int n = nums.size();
        int i = 0;
        int j = 0;
        int count_zero = 0;
        int maxi = 0;
        while(j < n)
        {
            if(nums[j] == 0)
            {
                count_zero++;
            }
            while(count_zero > 1)
            {
                if(nums[i] == 0)
                {
                    count_zero--;
                }
                i++;
            }
            maxi = max(j-i+1,maxi);
            j++;
        }
        return maxi-1;                   
    }
};