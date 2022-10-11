class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i;
        unordered_map<int,int>mp;
        vector<int>v;
        for(i=0;i<nums.size();i++)
        {
            int val = target - nums[i];
            if(mp.find(val) != mp.end())
            {
                v.push_back(mp[target-nums[i]]);
                v.push_back(i);
            }
            else
            {
                mp[nums[i]] = i;
            }
        }
        return v;
        
    }
};