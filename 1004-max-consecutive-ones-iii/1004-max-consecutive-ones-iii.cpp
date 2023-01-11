class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int i = 0,j=0;
        int n = nums.size();
        int countZero = 0;
        int ans = INT_MIN;
        
        while(j < n)
        {
            if(nums[j] == 0)
            {
                countZero++;
            }
            while(countZero > k)
            {
                if(nums[i] == 0)
                {
                    countZero--;
                }
                i++;
            }
            
            ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};