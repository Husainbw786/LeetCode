class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        int n = nums.size();
        int i;
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        vector<int>ans;
        for(i=0;i<n;i++)
        {
            if((mp.find(nums[i] - 1 ) != mp.end() || mp.find(nums[i]+1) != mp.end()) ||  mp[nums[i]] > 1)
            {
                continue;
            }
            else
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};