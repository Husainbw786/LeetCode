class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i;
        unordered_map<int,int>mp;
        vector<int>v(2,0);
        for(i=0;i<nums.size();i++)
        {
            int val = target - nums[i];
            if(mp.find(val) != mp.end())
            {
                v[0] = mp[target-nums[i]];
                v[1] = i;
            }
            else
            {
                mp[nums[i]] = i;
            }
        }

    return v;
        
    }
};
