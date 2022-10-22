class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
        unordered_map<int,int>mp;
        int n = nums.size();
        int i;
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        while(mp.find(original) != mp.end())
        {
            if(mp.find(original) != mp.end())
            {
                original = original*2;
            }
        }
        return original;
    }
};