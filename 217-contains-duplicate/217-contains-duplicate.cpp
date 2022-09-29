class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        int i;
        int n = nums.size();
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]] > 1)
            {
                return true;
            }
        }
        return false;
    }
};