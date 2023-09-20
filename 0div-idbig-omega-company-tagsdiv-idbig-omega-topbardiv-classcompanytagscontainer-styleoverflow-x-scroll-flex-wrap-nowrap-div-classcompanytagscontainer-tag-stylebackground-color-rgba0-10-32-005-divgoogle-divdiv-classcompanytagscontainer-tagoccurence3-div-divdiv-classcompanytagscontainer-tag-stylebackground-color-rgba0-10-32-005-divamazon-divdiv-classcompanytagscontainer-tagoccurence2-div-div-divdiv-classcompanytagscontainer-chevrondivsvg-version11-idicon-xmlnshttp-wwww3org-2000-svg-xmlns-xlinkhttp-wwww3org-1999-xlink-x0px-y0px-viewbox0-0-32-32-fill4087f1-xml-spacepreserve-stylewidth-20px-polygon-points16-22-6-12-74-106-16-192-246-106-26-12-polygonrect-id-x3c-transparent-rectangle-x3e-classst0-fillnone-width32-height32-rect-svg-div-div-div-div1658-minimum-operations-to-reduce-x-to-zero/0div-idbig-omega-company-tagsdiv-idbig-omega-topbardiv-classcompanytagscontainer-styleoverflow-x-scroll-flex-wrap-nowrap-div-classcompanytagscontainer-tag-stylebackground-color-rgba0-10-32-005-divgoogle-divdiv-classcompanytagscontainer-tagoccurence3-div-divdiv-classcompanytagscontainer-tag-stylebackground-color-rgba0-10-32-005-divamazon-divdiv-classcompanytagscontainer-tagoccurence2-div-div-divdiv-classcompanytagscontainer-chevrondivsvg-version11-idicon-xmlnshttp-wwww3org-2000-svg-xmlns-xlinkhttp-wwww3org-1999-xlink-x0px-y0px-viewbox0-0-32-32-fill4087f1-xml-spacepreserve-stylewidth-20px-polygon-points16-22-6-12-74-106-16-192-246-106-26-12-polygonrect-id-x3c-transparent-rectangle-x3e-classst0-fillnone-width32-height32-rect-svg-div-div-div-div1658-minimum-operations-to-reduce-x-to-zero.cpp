class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
     
        int i = 0;
        int j = 0;
        int n = nums.size();
        int total = 0;
        for(i=0;i<n;i++)
        {
            total += nums[i];
        }
        int target = total - x;
        if(target == 0)
        {
            return n;
        }
        if(total < x)
        {
            return -1;
        }
        i = 0;
        int ans = 0;
        int curr_sum = 0;
        while(j < n)
        {
            curr_sum += nums[j];
            while(i <= j && curr_sum > target)
            {
                curr_sum -= nums[i];
                i++;
            }
            if(curr_sum == target)
            {
                ans = max(ans,j-i+1);
            }
           
            j++;
        }
        if(ans == 0)
        {
            return -1;
        }
        return n-ans;
        
    }
};