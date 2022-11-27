class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        int start = 0;
        int end = 0;
        int n = nums.size();
        int count = 0;
        long long p = 1;
        
        while(end < n)
        {
            p *= nums[end];
            while(start < n && p >= k)
            {
                p = p / nums[start];
                start++;
            }
            if(p < k)
            {
                count += end - start + 1;
            }
            end ++;
        }
        return count;
    }
};
