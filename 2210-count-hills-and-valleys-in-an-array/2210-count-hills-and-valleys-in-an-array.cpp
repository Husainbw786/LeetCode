class Solution {
public:
    int countHillValley(vector<int>& nums) {
        
        int n = nums.size();
        int i = 0;
        int j = i+1;
        int k = j+1;
        int ans = 0;
        while(k < n)
        {
            if(nums[j] == nums[k])
            {
                j++;
                k++;
                continue;
            }
            if(nums[j] > nums[k] && nums[j] > nums[i])
            {
                ans++;
            }
            if(nums[j] < nums[i] && nums[j] < nums[k])
            {
               ans++;
            }
            
            k++;
            j++;
            i = j-1;
        }
        return ans;
    }
};