class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        
        int n = logs.size();
        unordered_map<int,unordered_set<int>>mp;
        int i;
        vector<int>ans(k,0);
        for(i=0;i<n;i++)
        {
            int id = logs[i][0];
            int time = logs[i][1];
            mp[id].insert(time);
        }
        for(auto x : mp)
        {
            int size = x.second.size();
            if(size <= k)
            {
                ans[size-1]++;
            }
        }
        return ans;
    }
};