class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        
        vector<vector<int>>ans;
        unordered_map<int,vector<int>>mp;
        int n = groupSizes.size();
        int i;
        for(i=0;i<n;i++)
        {
            mp[groupSizes[i]].push_back(i);
            if(groupSizes[i] == mp[groupSizes[i]].size())
            {
                ans.push_back(mp[groupSizes[i]]);
                mp[groupSizes[i]].clear();
            }
        }
        return ans;
    }
};