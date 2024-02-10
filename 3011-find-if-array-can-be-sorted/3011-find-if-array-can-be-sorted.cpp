class Solution {
public:
    bool canSortArray(vector<int>& nums) {
     
        map<int,int>mp;
        int i;
        int n = nums.size();
        for(i=0;i<n;i++)
        {
            if(mp.find(nums[i]) == mp.end())
            {
                int x = nums[i];
                int count = 0;
                while(x)
                {
                    if(x & 1)
                    {
                        count++;
                    }
                    x = x >> 1;
                }
                mp[nums[i]] = count;
            }
        }
        
        for(i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i] > nums[j])
                {
                    if(mp[nums[i]] != mp[nums[j]])
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};