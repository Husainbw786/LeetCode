class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int i;
        int n = nums.size();
        unordered_map<int,int>mp;
        for(i=0;i<n;i++)
        {
            if(nums[i] > 0)
            {
                if(nums[i] > maxi)
                {
                    maxi = nums[i];
                }
                if(nums[i] < mini)
                {
                    mini = nums[i];
                }
            }
            mp[nums[i]]++;
        }
        if(mini > 0)
        {
            for(i=1;i<mini;i++)
            {
                if(mp.find(i) == mp.end())
                {
                    return i;
                }
            }
        }
        for(i=mini+1;i<maxi;i++)
        {
            if(mp.find(i) == mp.end())
            {
                return i;
            }
        }
        return maxi+1;
    }
};