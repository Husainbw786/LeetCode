class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;
        int i;
        int count = 0;
        int n = nums.size();
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto x : mp)
        {
            if(k == 0)
            {
                if(x.second >= 2)
                {
                    count++;
                }
            }
            else if(mp.find(x.first + k) != mp.end())
            {
                count++;
            }
        }
        return count;
        
    }
};