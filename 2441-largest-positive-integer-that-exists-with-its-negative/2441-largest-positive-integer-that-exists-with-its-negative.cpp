class Solution {
public:
    int findMaxK(vector<int>& nums) {
        
        
        unordered_map<int,int>mp;
        int i;
        int n = nums.size();
        if(n == 1)
        {
            return -1;
        }
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        sort(nums.begin(),nums.end());
        int ans = -1;
        for(i=n-1;i>=0;i--)
        {
            int v = nums[i];
            if(mp.find(-v) != mp.end())
            {
                ans = v;
                break;
            }
        }
        return ans;
    }
};