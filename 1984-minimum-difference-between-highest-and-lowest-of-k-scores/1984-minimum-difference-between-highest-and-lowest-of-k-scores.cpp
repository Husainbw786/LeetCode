class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = 0;
        int mini = INT_MAX;
        for(j=0;j<n;j++)
        {
            if(j-i+1 == k)
            {
                mini = min(mini,nums[j] - nums[i]);
               
                i++;
            }
        }
        return mini;
    }
};