class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        
        int n = adjacentPairs.size();
        int i;
        vector<int>ans;
        unordered_map<int,vector<int>>mp;
        for(i=0;i<n;i++)
        {
            int x = adjacentPairs[i][0];
            int y = adjacentPairs[i][1];
            mp[x].push_back(y);
            mp[y].push_back(x);
        }
        int num;
        for(auto x : mp)
        {
            if(x.second.size() == 1)
            {
                ans.push_back(x.first);
                ans.push_back(x.second[0]);
                break;
            }
        }
        vector<int>vec = mp[ans[ans.size() - 1]];
        while(vec.size() != 1)
        {
            if(vec[0] != ans[ans.size()-2])
            {
                ans.push_back(vec[0]);
            }
            else
            {
                ans.push_back(vec[1]);                
            }
            vec = mp[ans[ans.size()-1]];
        }
       
       return ans; 
    }
};