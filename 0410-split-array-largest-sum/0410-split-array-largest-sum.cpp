class Solution {
public:
    
    bool is_possible(int mid, vector<int>nums,int k)
    {
        int sum = 0;
        int sub_array = 1;
        for(int i=0;i<nums.size();i++)
        {
            if(sum + nums[i] > mid)
            {
                sub_array++;
                sum = 0;
                sum = nums[i];
            }
            else
            {
                sum += nums[i];
            }
        }
        if(sub_array > k)
        {
            return false;
        }
        
      return true;
    }
    
    
    int splitArray(vector<int>& nums, int k) {
        
        int n = nums.size();
        int low = nums[0];
        int high = 0;
        
        for(int i=0;i<n;i++)
        {
            low = max(low,nums[i]);
            high += nums[i];
        }
        int ans = high;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            if(is_possible(mid,nums,k))
            {
                ans = mid;
                high = mid -1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};