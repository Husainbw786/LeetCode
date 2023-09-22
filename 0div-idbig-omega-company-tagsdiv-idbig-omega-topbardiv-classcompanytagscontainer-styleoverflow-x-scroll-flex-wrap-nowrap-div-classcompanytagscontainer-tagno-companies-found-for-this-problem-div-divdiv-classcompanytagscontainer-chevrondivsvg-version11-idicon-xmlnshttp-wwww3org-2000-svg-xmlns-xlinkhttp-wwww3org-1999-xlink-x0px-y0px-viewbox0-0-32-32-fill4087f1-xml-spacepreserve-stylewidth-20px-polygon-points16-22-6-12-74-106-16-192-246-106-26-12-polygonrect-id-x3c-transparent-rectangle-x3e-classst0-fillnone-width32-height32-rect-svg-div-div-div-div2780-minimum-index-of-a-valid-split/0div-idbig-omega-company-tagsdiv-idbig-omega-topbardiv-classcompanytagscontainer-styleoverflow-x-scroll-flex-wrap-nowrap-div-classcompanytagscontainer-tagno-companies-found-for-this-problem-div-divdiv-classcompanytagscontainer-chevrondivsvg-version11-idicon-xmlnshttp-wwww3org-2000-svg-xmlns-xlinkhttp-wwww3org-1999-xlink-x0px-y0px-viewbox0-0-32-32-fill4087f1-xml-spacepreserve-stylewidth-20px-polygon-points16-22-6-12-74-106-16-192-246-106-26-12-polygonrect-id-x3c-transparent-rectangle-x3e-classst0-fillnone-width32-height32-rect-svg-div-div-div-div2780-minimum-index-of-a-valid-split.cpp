class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        
        int n = nums.size();
        
        int i;
        unordered_map<int,int>mp;
        int maxi = INT_MIN;
        int dom = -1;
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
            if(maxi < mp[nums[i]])
            {
                maxi = mp[nums[i]];
                dom = nums[i];
            }
        }

        int count = 0;
        
        for(i=0;i<n;i++)
        {
            if(nums[i] == dom)
            {
                count++;
                if(count*2 > i+1)
                {
                    if((mp[dom] - count)*2  > n-i-1)
                    {
                        return i;
                    }
                }
            }
        }
     return -1;
    }
};