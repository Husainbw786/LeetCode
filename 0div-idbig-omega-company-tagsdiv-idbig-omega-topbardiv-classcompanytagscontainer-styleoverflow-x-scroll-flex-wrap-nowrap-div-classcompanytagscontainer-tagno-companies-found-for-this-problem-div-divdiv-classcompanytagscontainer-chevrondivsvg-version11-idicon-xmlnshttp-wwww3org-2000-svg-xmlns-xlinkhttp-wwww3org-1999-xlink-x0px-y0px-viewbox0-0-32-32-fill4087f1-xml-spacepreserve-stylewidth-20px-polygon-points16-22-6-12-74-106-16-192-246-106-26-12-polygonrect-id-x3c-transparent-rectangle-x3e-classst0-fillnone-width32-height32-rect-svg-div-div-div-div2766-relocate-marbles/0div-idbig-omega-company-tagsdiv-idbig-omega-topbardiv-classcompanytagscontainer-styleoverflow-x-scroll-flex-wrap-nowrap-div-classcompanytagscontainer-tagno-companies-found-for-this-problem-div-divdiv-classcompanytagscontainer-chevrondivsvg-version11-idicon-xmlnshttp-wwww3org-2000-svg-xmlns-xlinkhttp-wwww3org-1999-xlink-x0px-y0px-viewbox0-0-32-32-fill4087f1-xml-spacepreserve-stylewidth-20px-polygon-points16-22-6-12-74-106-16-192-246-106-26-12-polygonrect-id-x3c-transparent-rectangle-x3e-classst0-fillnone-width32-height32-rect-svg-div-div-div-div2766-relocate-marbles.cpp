class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        
        int n = nums.size();
        map<int,int>mp;
        int i = 0;
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        
        for(i=0;i<moveFrom.size();i++)
        {
            if(mp[moveTo[i]] == 0)
            {
                mp[moveTo[i]] = 1;
            }
            if(moveFrom[i] != moveTo[i])
            {
                mp[moveFrom[i]] = 0;
            }
        }
        
        vector<int>ans;
        for(auto x : mp)
        {
            if(x.second > 0)
            {
                ans.push_back(x.first);
            }
            
        }
        return ans;
    }
};