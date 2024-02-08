class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        
        int sum = 0;
        int n = nums.size();
        int i;
        int count = 0;
        for(i=0;i<n;i++)
        {
            sum += nums[i];
            if(sum == 0)
            {
                count++;
            }
        }
        return count;
    }
};