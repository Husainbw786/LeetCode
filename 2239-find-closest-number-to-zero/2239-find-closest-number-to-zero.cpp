class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>v;
        int i;
        int mini = INT_MAX;
        for(i=0;i<n;i++)
        {
            int x = abs(0 - nums[i]);
            mini = min(x,mini);
        }
        for(i=0;i<n;i++)
        {
            int x = abs(0 - nums[i]);
            if(x == mini)
            {
                v.push_back(nums[i]);
            }
        }
        int maxi = INT_MIN;
        for(i=0;i<v.size();i++)
        {
            maxi = max(v[i],maxi);
        }
        return maxi;
    }
};