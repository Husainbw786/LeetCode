class Solution {
public:
    int maximumCount(vector<int>& nums) {
        
        int neg = 0;
        int pos = 0;
        int i;
        int n = nums.size();
        for(i=0;i<n;i++)
        {
            if(nums[i] > 0)
            {
                pos++;
            }
            else if(nums[i] < 0)
            {
                neg++;
            }
        }
        return max(pos,neg);
    }
};