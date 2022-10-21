class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;
        int n = nums.size();
        int i;
        for(i=0;i<n;i++)
        {
           int curr = nums[i];
           if(mp.find(curr) != mp.end())
           {
               if(abs(i - mp[curr]) <= k)
               {
                   return true;
               }
               mp[curr] = i;
           }
           else
           {
               mp[nums[i]] = i;
           }
            
        }
        return false;
        
    }
};